void CWE197_Numeric_Truncation_Error__short_fscanf_65_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = CWE197_Numeric_Truncation_Error__short_fscanf_65b_badSink;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number input from the console using fscanf() */
    fscanf (stdin, "%hd", &data);
    /* use the function pointer */
    funcPtr(data);
}