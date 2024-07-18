void CWE197_Numeric_Truncation_Error__int_large_to_char_18_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    goto source;
source:
    /* FLAW: Use a number larger than SHRT_MAX */
    data = SHRT_MAX + 5;
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}