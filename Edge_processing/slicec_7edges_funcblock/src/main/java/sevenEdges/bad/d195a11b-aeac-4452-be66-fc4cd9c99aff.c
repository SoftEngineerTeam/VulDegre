void CWE197_Numeric_Truncation_Error__int_fscanf_to_char_08_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}