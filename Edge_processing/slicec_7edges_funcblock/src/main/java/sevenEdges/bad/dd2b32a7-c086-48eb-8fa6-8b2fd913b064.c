void CWE476_NULL_Pointer_Dereference__int64_t_66b_badSink(int64_t * dataArray[])
{
    /* copy data out of dataArray */
    int64_t * data = dataArray[2];
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printLongLongLine(*data);
}