void CWE401_Memory_Leak__strdup_wchar_t_18_bad()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
        /* Use data */
        printWLine(data);
    }
    goto sink;
sink:
    /* POTENTIAL FLAW: No deallocation of memory */
    /* no deallocation */
    ; /* empty statement needed for some flow variants */
}