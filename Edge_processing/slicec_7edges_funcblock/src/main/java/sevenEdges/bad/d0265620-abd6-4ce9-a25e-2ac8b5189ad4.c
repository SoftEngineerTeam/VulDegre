void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_65b_badSink;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    data[0] = L'\0'; /* null terminate */
    /* use the function pointer */
    funcPtr(data);
}