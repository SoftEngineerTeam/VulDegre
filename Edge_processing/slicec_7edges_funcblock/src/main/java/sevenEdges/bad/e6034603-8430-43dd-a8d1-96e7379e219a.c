void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_11_bad()
{
    char * data;
    char * dataBadBuffer = (char *)ALLOCA((10)*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA((10+1)*sizeof(char));
    if(globalReturnsTrue())
    {
        /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
         * string copies in the sinks  */
        data = dataBadBuffer;
        data[0] = '\0'; /* null terminate */
    }
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}