void CWE191_Integer_Underflow__short_min_multiply_21_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    badStatic = 1; /* true */
    badSink(data);
}