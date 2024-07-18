void CWE190_Integer_Overflow__int64_t_rand_add_44_bad()
{
    int64_t data;
    /* define a function pointer */
    void (*funcPtr) (int64_t) = badSink;
    data = 0LL;
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    /* use the function pointer */
    funcPtr(data);
}