void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
        free(data);
    }
}