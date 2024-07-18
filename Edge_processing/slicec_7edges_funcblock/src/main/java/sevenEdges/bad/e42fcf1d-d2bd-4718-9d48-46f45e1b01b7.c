void CWE127_Buffer_Underread__char_alloca_ncpy_68b_badSink()
{
    char * data = CWE127_Buffer_Underread__char_alloca_ncpy_68_badData;
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