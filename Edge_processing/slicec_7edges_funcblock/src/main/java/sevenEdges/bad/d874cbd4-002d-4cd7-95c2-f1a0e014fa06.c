void CWE191_Integer_Underflow__char_rand_sub_63_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    CWE191_Integer_Underflow__char_rand_sub_63b_badSink(&data);
}