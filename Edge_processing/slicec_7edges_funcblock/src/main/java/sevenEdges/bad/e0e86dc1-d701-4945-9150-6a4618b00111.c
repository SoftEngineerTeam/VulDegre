void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memmove_68_badData;
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}