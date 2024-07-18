void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_31_bad()
{
    char * data;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            strncpy(data, source, strlen(source) + 1);
            printLine(data);
        }
    }
}