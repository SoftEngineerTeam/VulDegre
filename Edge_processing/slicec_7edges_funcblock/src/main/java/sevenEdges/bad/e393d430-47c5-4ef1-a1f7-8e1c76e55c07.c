void CWE127_Buffer_Underread__char_declare_ncpy_31_bad()
{
    char * data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[100];
            memset(dest, 'C', 100-1); /* fill with 'C's */
            dest[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
            strncpy(dest, data, strlen(dest));
            /* Ensure null termination */
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}