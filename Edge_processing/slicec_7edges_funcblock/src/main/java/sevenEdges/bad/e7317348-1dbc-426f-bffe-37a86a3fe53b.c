void CWE476_NULL_Pointer_Dereference__long_22_bad()
{
    long * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__long_22_badGlobal = 1; /* true */
    CWE476_NULL_Pointer_Dereference__long_22_badSink(data);
}