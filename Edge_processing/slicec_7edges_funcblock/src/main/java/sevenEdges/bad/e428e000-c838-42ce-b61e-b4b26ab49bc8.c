void CWE476_NULL_Pointer_Dereference__int_68b_badSink()
{
    int * data = CWE476_NULL_Pointer_Dereference__int_68_badData;
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(*data);
}