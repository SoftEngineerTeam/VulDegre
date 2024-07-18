void CWE401_Memory_Leak__strdup_wchar_t_07_bad()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        {
            wchar_t myString[] = L"myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = wcsdup(myString);
            /* Use data */
            printWLine(data);
        }
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}