int64_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_badSource(int64_t * data)
{
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int64_t *)malloc(50*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    return data;
}