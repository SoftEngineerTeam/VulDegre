void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_bad()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badGlobal = 1; /* true */
    data = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_22_badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}