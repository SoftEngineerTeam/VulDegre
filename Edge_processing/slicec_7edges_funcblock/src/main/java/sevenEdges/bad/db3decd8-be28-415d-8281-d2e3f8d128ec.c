void CWE190_Integer_Overflow__int_rand_multiply_45_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE190_Integer_Overflow__int_rand_multiply_45_badData = data;
    badSink();
}