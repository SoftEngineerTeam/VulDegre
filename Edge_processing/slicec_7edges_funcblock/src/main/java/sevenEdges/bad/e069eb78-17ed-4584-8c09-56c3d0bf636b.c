static void badSink()
{
    wchar_t * data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_45_badData;
    {
        wchar_t source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        free(data);
    }
}