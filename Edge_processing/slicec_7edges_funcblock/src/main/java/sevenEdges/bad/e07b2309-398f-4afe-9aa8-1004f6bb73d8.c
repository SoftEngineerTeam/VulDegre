void CWE191_Integer_Underflow__short_min_postdec_10_bad()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = SHRT_MIN;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}