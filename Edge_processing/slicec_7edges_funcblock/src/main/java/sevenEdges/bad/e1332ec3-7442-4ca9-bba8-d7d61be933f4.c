void CWE190_Integer_Overflow__int64_t_max_multiply_44_bad()
{
    int64_t data;
    /* define a function pointer */
    void (*funcPtr) (int64_t) = badSink;
    data = 0LL;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = LLONG_MAX;
    /* use the function pointer */
    funcPtr(data);
}