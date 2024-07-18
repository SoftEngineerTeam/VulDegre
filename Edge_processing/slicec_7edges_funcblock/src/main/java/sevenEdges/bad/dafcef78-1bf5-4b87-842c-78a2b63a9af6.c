void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68b_badSink()
{
    char * data = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_68_badData;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
    }
}