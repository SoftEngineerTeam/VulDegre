static void badSink()
{
    int * data = CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_45_badData;
    {
        int source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}