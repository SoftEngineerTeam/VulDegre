void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_61_bad()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_61b_badSource(data);
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
        free(data);
    }
}