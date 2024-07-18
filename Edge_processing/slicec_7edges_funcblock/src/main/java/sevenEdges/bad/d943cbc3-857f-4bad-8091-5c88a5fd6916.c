void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65b_badSink;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int *)malloc(50*sizeof(int));
    /* use the function pointer */
    funcPtr(data);
}