void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_68_bad()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_68_badData = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_68b_badSink();
}