void CWE191_Integer_Underflow__int64_t_rand_postdec_68_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    CWE191_Integer_Underflow__int64_t_rand_postdec_68_badData = data;
    CWE191_Integer_Underflow__int64_t_rand_postdec_68b_badSink();
}