int64_t CWE191_Integer_Underflow__int64_t_rand_sub_61b_badSource(int64_t data)
{
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    return data;
}