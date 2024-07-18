void CWE190_Integer_Overflow__int_max_multiply_64_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    CWE190_Integer_Overflow__int_max_multiply_64b_badSink(&data);
}