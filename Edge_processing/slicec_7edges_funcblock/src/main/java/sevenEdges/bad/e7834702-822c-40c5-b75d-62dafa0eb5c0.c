wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_22_badSource(wchar_t * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_22_badGlobal)
    {
        /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* null terminate */
    }
    return data;
}