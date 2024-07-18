void CWE124_Buffer_Underwrite__char_declare_cpy_34_bad()
{
    char * data;
    CWE124_Buffer_Underwrite__char_declare_cpy_34_unionType myUnion;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* fill with 'C's */
            source[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
            strcpy(data, source);
            printLine(data);
        }
    }
}