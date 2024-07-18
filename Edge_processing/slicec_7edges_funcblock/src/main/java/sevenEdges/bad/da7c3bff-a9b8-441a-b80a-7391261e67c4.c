void CWE190_Integer_Overflow__unsigned_int_rand_multiply_68_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    CWE190_Integer_Overflow__unsigned_int_rand_multiply_68_badData = data;
    CWE190_Integer_Overflow__unsigned_int_rand_multiply_68b_badSink();
}