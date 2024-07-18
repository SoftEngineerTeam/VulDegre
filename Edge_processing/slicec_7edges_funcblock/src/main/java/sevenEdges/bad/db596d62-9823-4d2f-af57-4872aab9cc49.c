void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memcpy_61_bad()
{
    wchar_t * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memcpy_61b_badSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
        free(data);
    }
}