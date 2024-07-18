void CWE401_Memory_Leak__wchar_t_realloc_18_bad()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    goto sink;
sink:
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}