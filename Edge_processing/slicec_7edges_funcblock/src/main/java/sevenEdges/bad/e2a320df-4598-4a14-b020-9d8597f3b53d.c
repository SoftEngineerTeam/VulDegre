void CWE197_Numeric_Truncation_Error__short_large_34_bad()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_large_34_unionType myUnion;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a number larger than CHAR_MAX */
    data = CHAR_MAX + 1;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}