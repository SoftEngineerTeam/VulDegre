void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}