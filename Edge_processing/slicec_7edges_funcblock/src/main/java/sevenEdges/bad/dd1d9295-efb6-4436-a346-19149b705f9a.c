void CWE197_Numeric_Truncation_Error__short_rand_08_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    if(staticReturnsTrue())
    {
        /* FLAW: Use a random number */
        data = (short)RAND32();
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}