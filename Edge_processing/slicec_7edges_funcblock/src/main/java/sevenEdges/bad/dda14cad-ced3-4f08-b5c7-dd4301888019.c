void CWE197_Numeric_Truncation_Error__int_rand_to_char_08_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}