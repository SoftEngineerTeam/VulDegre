void CWE401_Memory_Leak__twoIntsStruct_calloc_42_bad()
{
    twoIntsStruct * data;
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}