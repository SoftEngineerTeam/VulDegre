void CWE190_Integer_Overflow__int_max_multiply_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    /* put data in array */
    dataArray[2] = data;
    CWE190_Integer_Overflow__int_max_multiply_66b_badSink(dataArray);
}