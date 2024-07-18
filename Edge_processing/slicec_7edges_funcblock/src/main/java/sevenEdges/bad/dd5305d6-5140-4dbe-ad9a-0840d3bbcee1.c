void CWE197_Numeric_Truncation_Error__short_fscanf_54_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number input from the console using fscanf() */
    fscanf (stdin, "%hd", &data);
    CWE197_Numeric_Truncation_Error__short_fscanf_54b_badSink(data);
}