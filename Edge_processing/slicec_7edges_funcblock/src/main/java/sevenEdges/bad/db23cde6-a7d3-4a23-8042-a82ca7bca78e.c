void CWE401_Memory_Leak__int64_t_malloc_63b_badSink(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}