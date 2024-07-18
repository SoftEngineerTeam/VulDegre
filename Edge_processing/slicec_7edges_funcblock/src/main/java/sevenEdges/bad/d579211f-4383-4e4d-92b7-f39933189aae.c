void CWE197_Numeric_Truncation_Error__int_large_to_short_52_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number larger than SHRT_MAX */
    data = SHRT_MAX + 5;
    CWE197_Numeric_Truncation_Error__int_large_to_short_52b_badSink(data);
}