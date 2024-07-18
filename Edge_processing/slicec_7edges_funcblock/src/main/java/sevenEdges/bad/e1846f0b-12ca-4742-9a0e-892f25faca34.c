void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66b_badSink(int * dataArray[])
{
    /* copy data out of dataArray */
    int * data = dataArray[2];
    {
        int source[100] = {0}; /* fill with 0's */
        {
            size_t i;
            /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}