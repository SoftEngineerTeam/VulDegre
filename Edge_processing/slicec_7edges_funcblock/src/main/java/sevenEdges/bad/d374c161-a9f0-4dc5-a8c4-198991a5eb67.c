void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_unionType myUnion;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            strcpy(data, source);
            printLine(data);
        }
    }
}