static void badSink()
{
    wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_45_badData;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
        free(data);
    }
}