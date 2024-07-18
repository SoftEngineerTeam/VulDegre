void CWE197_Numeric_Truncation_Error__int_fscanf_to_short_14_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}