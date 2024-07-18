void CWE197_Numeric_Truncation_Error__short_rand_63_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a random number */
    data = (short)RAND32();
    CWE197_Numeric_Truncation_Error__short_rand_63b_badSink(&data);
}