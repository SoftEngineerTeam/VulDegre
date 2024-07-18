void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_34_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            strncpy(dest, data, strlen(data));
            dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
            printLine(data);
        }
    }
}