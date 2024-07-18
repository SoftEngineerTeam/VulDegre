void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_68b_badSink()
{
    wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_68_badData;
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