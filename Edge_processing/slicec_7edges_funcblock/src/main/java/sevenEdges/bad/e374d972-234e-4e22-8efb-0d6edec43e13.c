int64_t CWE190_Integer_Overflow__int64_t_rand_add_61b_badSource(int64_t data)
{
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    return data;
}