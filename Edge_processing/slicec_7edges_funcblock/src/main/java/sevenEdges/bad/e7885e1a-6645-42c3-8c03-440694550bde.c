void CWE476_NULL_Pointer_Dereference__int_44_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = badSink;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    /* use the function pointer */
    funcPtr(data);
}