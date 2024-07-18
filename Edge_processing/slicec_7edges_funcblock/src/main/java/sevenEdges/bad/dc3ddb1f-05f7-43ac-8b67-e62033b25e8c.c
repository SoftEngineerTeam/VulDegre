void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_68_badData;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}