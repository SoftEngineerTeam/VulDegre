void CWE401_Memory_Leak__wchar_t_realloc_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    /* dereference dataPtr into data */
    wchar_t * data = (*dataPtr);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}