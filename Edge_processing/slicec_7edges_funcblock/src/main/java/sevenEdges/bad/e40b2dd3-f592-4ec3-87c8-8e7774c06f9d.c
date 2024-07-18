void CWE401_Memory_Leak__twoIntsStruct_malloc_63b_badSink(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}