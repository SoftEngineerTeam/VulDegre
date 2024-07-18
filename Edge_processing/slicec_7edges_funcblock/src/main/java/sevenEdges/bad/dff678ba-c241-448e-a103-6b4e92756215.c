void CWE476_NULL_Pointer_Dereference__int_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * * dataPtr = (int * *)dataVoidPtr;
    /* dereference dataPtr into data */
    int * data = (*dataPtr);
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(*data);
}