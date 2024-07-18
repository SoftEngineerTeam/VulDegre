void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_22_bad()
{
    wchar_t * data;
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_22_badSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
        wcsncat(data, source, 100);
        printWLine(data);
        free(data);
    }
}