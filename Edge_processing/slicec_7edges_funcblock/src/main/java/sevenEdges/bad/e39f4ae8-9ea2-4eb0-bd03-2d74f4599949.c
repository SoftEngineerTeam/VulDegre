void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_52c_badSink(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
    }
}