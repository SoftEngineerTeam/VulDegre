void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61_bad()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    data = CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_61b_badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}