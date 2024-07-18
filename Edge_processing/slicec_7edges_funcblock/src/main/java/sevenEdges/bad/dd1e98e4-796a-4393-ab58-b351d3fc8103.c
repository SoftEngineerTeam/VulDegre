void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_65b_badSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcscat(dest, data);
        printWLine(data);
        free(data);
    }
}