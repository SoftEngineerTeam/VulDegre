void CWE401_Memory_Leak__int_malloc_63b_badSink(int * * dataPtr)
{
    int * data = *dataPtr;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}