void CWE191_Integer_Underflow__char_min_multiply_53_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
    CWE191_Integer_Underflow__char_min_multiply_53b_badSink(data);
}