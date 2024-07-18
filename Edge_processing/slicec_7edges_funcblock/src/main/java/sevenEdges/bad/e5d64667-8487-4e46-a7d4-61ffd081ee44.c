void CWE401_Memory_Leak__char_malloc_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* dereference dataPtr into data */
    char * data = (*dataPtr);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}