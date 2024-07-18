wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_22_badSource(wchar_t * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_22_badGlobal)
    {
        /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
        wmemset(data, L'A', 100-1); /* fill with L'A's */
        data[100-1] = L'\0'; /* null terminate */
    }
    return data;
}