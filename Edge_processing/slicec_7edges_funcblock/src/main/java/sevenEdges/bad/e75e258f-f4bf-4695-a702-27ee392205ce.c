void CWE197_Numeric_Truncation_Error__short_large_67_bad()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_large_67_structType myStruct;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number larger than CHAR_MAX */
    data = CHAR_MAX + 1;
    myStruct.structFirst = data;
    CWE197_Numeric_Truncation_Error__short_large_67b_badSink(myStruct);
}