void CWE190_Integer_Overflow__int_max_add_52_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    CWE190_Integer_Overflow__int_max_add_52b_badSink(data);
}