void CWE190_Integer_Overflow__short_rand_add_45_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    CWE190_Integer_Overflow__short_rand_add_45_badData = data;
    badSink();
}