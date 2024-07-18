void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_17_bad()
{
    int i;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        wcscpy(data, source);
        printWLine(data);
        free(data);
    }
}