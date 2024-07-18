void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_10_bad()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* null terminate */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        SNPRINTF(data, 100, L"%s", source);
        printWLine(data);
        free(data);
    }
}