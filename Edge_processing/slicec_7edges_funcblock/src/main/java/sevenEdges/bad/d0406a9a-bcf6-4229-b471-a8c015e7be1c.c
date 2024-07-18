void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_bad()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
        data = (int *)malloc(50*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
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