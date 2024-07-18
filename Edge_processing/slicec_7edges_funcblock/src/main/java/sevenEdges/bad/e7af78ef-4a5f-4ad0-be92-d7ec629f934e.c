void CWE197_Numeric_Truncation_Error__int_fgets_to_char_61_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = CWE197_Numeric_Truncation_Error__int_fgets_to_char_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}