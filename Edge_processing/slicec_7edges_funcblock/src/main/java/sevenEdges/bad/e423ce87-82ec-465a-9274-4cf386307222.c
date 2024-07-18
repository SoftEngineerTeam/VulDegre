void CWE401_Memory_Leak__int_malloc_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * * dataPtr = (int * *)dataVoidPtr;
    /* dereference dataPtr into data */
    int * data = (*dataPtr);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}