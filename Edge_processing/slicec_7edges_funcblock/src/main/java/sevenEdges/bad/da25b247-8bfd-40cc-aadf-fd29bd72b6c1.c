void CWE191_Integer_Underflow__int_min_sub_63_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    CWE191_Integer_Underflow__int_min_sub_63b_badSink(&data);
}