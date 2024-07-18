void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_34_bad()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_34_unionType myUnion;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
            printWLine(data);
            free(data);
        }
    }
}