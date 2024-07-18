void CWE191_Integer_Underflow__short_min_postdec_66_bad()
{
    short data;
    short dataArray[5];
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    /* put data in array */
    dataArray[2] = data;
    CWE191_Integer_Underflow__short_min_postdec_66b_badSink(dataArray);
}