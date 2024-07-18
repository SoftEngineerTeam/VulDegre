void CWE191_Integer_Underflow__char_fscanf_postdec_66b_badSink(char dataArray[])
{
    /* copy data out of dataArray */
    char data = dataArray[2];
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}