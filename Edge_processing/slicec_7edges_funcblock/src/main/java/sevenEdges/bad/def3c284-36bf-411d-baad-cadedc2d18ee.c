void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_68_badData;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
    }
}