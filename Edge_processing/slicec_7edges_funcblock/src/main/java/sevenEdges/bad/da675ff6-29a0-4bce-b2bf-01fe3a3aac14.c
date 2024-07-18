void CWE191_Integer_Underflow__int_rand_sub_51_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE191_Integer_Underflow__int_rand_sub_51b_badSink(data);
}