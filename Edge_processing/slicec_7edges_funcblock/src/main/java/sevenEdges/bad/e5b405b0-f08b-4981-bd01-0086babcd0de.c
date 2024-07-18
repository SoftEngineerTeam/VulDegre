void CWE401_Memory_Leak__wchar_t_realloc_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE401_Memory_Leak__wchar_t_realloc_65b_badSink;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    /* use the function pointer */
    funcPtr(data);
}