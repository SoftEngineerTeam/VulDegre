void CWE401_Memory_Leak__wchar_t_malloc_68_bad()
{
    wchar_t * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    CWE401_Memory_Leak__wchar_t_malloc_68_badData = data;
    CWE401_Memory_Leak__wchar_t_malloc_68b_badSink();
}