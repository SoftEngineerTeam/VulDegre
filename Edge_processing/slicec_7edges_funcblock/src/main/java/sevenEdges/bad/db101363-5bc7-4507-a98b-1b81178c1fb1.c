void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncat_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncat_68_badData;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
        strncat(data, source, 100);
        printLine(data);
    }
}