void CWE197_Numeric_Truncation_Error__short_large_02_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    if(1)
    {
        /* FLAW: Use a number larger than CHAR_MAX */
        data = CHAR_MAX + 1;
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}