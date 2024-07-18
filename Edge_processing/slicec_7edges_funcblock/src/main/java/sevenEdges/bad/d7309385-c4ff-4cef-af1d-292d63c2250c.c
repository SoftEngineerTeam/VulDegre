void CWE190_Integer_Overflow__int64_t_rand_multiply_51_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    CWE190_Integer_Overflow__int64_t_rand_multiply_51b_badSink(data);
}