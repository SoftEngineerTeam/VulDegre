void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (int *)malloc(50*sizeof(int));
    if (data == NULL) {exit(-1);}
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_badData = data;
    badSink();
}