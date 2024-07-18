void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_68b_badSink()
{
    wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_68_badData;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        wcscpy(dest, data);
        printWLine(data);
        free(data);
    }
}