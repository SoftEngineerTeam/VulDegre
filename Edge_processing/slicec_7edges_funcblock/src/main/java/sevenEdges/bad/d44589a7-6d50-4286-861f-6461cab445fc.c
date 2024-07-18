void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54e_badSink(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
    }
}