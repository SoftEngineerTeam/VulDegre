void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_bad()
{
    int64_t * data;
    /* define a function pointer */
    void (*funcPtr) (int64_t *) = badSink;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int64_t *)malloc(50*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}