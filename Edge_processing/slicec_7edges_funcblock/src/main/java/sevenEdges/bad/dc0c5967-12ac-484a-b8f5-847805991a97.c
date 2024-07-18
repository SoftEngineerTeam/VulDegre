void CWE476_NULL_Pointer_Dereference__int_65b_badSink(int * data)
{
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(*data);
}