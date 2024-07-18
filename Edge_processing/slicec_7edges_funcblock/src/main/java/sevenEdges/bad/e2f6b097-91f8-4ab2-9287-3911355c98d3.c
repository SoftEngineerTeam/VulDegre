void CWE124_Buffer_Underwrite__char_declare_memcpy_68b_badSink()
{
    char * data = CWE124_Buffer_Underwrite__char_declare_memcpy_68_badData;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
        memcpy(data, source, 100*sizeof(char));
        /* Ensure the destination buffer is null terminated */
        data[100-1] = '\0';
        printLine(data);
    }
}