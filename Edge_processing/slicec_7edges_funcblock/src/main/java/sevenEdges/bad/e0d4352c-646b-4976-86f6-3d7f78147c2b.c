void CWE191_Integer_Underflow__int64_t_min_multiply_45_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = LLONG_MIN;
    CWE191_Integer_Underflow__int64_t_min_multiply_45_badData = data;
    badSink();
}