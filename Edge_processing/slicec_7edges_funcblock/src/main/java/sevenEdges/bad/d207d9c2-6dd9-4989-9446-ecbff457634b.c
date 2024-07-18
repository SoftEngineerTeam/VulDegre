void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_61_bad()
{
    wchar_t * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_61b_badSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        wcscpy(data, source);
        printWLine(data);
        free(data);
    }
}