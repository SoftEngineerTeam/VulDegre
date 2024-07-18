void CWE191_Integer_Underflow__short_rand_sub_21_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    badStatic = 1; /* true */
    badSink(data);
}