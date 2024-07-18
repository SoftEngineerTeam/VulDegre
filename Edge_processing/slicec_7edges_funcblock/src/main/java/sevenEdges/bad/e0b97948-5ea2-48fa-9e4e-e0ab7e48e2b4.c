void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_31_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[50] = "";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            strncpy(dest, data, strlen(data));
            dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
            printLine(data);
        }
    }
}