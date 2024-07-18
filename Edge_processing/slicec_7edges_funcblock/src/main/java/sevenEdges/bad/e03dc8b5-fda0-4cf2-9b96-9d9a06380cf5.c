void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}