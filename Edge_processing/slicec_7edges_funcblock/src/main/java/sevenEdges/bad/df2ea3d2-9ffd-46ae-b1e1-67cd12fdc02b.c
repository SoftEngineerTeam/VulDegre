void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memmove_42_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data = badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
    }
}