void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_42_bad()
{
    wchar_t * data;
    data = NULL;
    data = badSource(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        wcscpy(data, source);
        printWLine(data);
        free(data);
    }
}