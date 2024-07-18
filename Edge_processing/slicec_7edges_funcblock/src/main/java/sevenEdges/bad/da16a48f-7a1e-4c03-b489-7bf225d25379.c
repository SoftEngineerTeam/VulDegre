void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_53d_badSink(char * data)
{
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}