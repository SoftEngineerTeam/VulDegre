void CWE476_NULL_Pointer_Dereference__long_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    long * * dataPtr = (long * *)dataVoidPtr;
    /* dereference dataPtr into data */
    long * data = (*dataPtr);
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printLongLine(*data);
}