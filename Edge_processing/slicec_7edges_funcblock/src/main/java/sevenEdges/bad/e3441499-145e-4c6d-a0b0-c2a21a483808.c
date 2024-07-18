void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_68_badData;
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}