void CWE401_Memory_Leak__int64_t_realloc_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    /* dereference dataPtr into data */
    int64_t * data = (*dataPtr);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}