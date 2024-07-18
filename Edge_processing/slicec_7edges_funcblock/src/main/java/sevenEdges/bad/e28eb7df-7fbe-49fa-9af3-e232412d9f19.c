void CWE191_Integer_Underflow__short_fscanf_postdec_54e_badSink(short data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        short result = data;
        printIntLine(result);
    }
}