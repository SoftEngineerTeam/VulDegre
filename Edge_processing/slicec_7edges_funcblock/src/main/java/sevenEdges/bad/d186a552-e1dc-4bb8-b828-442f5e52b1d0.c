void CWE197_Numeric_Truncation_Error__short_rand_66_bad()
{
    short data;
    short dataArray[5];
    /* Initialize data */
    data = -1;
    /* FLAW: Use a random number */
    data = (short)RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE197_Numeric_Truncation_Error__short_rand_66b_badSink(dataArray);
}