void CWE401_Memory_Leak__strdup_wchar_t_09_bad()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            wchar_t myString[] = L"myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = wcsdup(myString);
            /* Use data */
            printWLine(data);
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}