void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_bad()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int *)malloc(50*sizeof(int));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; /* fill with 0's */
            /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
            memmove(data, source, 100*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}