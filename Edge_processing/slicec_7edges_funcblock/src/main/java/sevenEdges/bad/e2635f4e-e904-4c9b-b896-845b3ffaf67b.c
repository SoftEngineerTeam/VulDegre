void CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_66b_badSink(int * dataArray[])
{
    /* copy data out of dataArray */
    int * data = dataArray[2];
    {
        int source[10] = {0};
        size_t i;
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}