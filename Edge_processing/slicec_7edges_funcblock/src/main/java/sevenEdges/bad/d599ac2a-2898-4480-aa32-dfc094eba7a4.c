void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_68_badData;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
        strcpy(data, source);
        printLine(data);
    }
}