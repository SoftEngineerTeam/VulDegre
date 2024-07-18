void CWE190_Integer_Overflow__short_max_multiply_54_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = SHRT_MAX;
    CWE190_Integer_Overflow__short_max_multiply_54b_badSink(data);
}