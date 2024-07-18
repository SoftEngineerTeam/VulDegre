void CWE197_Numeric_Truncation_Error__short_fscanf_66b_badSink(short dataArray[])
{
    /* copy data out of dataArray */
    short data = dataArray[2];
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}