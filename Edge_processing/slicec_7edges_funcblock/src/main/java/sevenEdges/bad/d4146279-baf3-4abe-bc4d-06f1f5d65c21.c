void CWE401_Memory_Leak__strdup_wchar_t_21_bad()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
        /* Use data */
        printWLine(data);
    }
    badStatic = 1; /* true */
    badSink(data);
}