void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_68_badData;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
    }
}