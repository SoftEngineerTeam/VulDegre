void CWE476_NULL_Pointer_Dereference__int_51_bad()
{
    int * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__int_51b_badSink(data);
}