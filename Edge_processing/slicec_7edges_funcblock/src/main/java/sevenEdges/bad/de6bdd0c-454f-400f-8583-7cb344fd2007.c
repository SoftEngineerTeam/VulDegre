void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_34_bad()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_34_unionType myUnion;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            SNPRINTF(dest, wcslen(data), L"%s", data);
            printWLine(data);
            free(data);
        }
    }
}