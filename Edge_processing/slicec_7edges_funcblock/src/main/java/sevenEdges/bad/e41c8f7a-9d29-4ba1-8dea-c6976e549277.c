void CWE191_Integer_Underflow__int_rand_postdec_64_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE191_Integer_Underflow__int_rand_postdec_64b_badSink(&data);
}