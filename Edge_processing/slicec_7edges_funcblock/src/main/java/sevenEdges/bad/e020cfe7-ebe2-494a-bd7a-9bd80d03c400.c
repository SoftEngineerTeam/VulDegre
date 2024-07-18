void CWE191_Integer_Underflow__int_rand_postdec_41_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    badSink(data);
}