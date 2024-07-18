void CWE401_Memory_Leak__char_malloc_42_bad()
{
    char * data;
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}