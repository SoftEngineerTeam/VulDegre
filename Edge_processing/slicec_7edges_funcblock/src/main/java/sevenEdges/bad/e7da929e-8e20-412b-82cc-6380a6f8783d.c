void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53d_badSink(int * data)
{
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}