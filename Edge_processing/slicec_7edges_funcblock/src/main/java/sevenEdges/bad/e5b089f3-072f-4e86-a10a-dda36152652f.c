void CWE191_Integer_Underflow__int64_t_rand_postdec_65_bad()
{
    int64_t data;
    /* define a function pointer */
    void (*funcPtr) (int64_t) = CWE191_Integer_Underflow__int64_t_rand_postdec_65b_badSink;
    data = 0LL;
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    /* use the function pointer */
    funcPtr(data);
}