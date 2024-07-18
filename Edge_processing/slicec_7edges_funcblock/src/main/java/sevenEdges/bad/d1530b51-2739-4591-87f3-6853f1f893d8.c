void CWE476_NULL_Pointer_Dereference__long_63b_badSink(long * * dataPtr)
{
    long * data = *dataPtr;
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printLongLine(*data);
}