void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_bad()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_41_badSink(data);
}