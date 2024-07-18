static void badSink()
{
    int * data = CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_45_badData;
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}