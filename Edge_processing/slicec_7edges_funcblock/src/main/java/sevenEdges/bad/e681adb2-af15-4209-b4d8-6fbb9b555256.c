void CWE197_Numeric_Truncation_Error__short_large_52_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number larger than CHAR_MAX */
    data = CHAR_MAX + 1;
    CWE197_Numeric_Truncation_Error__short_large_52b_badSink(data);
}