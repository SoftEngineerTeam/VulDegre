void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_bad()
{
    int64_t * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int64_t *)malloc(50*sizeof(int64_t));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64b_badSink(&data);
}