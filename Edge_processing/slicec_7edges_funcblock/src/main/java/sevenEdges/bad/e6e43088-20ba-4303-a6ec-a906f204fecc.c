void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_21_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memcpy(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
    }
}