void CWE197_Numeric_Truncation_Error__int_fscanf_to_char_02_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(1)
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