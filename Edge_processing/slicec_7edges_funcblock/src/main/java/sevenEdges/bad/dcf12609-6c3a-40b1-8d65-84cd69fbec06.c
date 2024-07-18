void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_14_bad()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
        free(data);
    }
}