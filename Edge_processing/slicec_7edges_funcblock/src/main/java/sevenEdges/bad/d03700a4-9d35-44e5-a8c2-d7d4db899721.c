void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    struct _twoIntsStruct * * dataPtr = (struct _twoIntsStruct * *)dataVoidPtr;
    /* dereference dataPtr into data */
    struct _twoIntsStruct * data = (*dataPtr);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}