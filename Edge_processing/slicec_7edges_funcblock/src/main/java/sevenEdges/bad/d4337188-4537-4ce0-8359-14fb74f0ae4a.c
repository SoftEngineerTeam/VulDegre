void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_21_bad()
{
    wchar_t * data;
    data = NULL;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
        free(data);
    }
}