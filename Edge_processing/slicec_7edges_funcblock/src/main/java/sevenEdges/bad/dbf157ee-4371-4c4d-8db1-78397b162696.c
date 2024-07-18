static void badSink()
{
    int * data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_badData;
    {
        int source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}