void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_68b_badSink()
{
    int * data = CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_68_badData;
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}