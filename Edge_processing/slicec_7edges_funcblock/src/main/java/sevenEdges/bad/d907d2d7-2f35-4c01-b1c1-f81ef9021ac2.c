void CWE191_Integer_Underflow__short_fscanf_postdec_68b_badSink()
{
    short data = CWE191_Integer_Underflow__short_fscanf_postdec_68_badData;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        short result = data;
        printIntLine(result);
    }
}