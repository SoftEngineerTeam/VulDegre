void CWE401_Memory_Leak__twoIntsStruct_malloc_68b_badSink()
{
    twoIntsStruct * data = CWE401_Memory_Leak__twoIntsStruct_malloc_68_badData;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}