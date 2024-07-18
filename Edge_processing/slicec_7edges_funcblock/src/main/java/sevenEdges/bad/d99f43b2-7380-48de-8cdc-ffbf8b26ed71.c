void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_bad()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67b_badSink(myStruct);
}