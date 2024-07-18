void CWE197_Numeric_Truncation_Error__int_fscanf_to_short_52c_badSink(int data)
{
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}