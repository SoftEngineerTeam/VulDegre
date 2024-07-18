void CWE401_Memory_Leak__wchar_t_malloc_66_bad()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    /* put data in array */
    dataArray[2] = data;
    CWE401_Memory_Leak__wchar_t_malloc_66b_badSink(dataArray);
}