void CWE476_NULL_Pointer_Dereference__int_54_bad()
{
    int * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__int_54b_badSink(data);
}