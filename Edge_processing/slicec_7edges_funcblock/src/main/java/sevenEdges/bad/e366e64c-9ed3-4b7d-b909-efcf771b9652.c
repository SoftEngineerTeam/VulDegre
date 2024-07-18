void CWE476_NULL_Pointer_Dereference__int64_t_44_bad()
{
    int64_t * data;
    /* define a function pointer */
    void (*funcPtr) (int64_t *) = badSink;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    /* use the function pointer */
    funcPtr(data);
}