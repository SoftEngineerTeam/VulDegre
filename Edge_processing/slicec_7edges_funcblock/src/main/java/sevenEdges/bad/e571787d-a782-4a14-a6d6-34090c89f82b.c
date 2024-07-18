void CWE197_Numeric_Truncation_Error__int_rand_to_short_07_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}