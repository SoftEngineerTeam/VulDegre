void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int *)malloc(50*sizeof(int));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_badSink(&data);
}