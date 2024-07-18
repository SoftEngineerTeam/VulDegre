void CWE197_Numeric_Truncation_Error__int_fscanf_to_char_52c_badSink(int data)
{
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}