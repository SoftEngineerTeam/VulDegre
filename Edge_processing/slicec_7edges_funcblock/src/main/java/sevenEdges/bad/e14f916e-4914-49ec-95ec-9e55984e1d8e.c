void CWE401_Memory_Leak__int_realloc_42_bad()
{
    int * data;
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}