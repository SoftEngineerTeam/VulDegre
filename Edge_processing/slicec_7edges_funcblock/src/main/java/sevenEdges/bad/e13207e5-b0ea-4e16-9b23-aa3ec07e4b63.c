void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_06_bad()
{
    char * data;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
         * string copies in the sinks  */
        data = dataBadBuffer;
        data[0] = '\0'; /* null terminate */
    }
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
    }
}