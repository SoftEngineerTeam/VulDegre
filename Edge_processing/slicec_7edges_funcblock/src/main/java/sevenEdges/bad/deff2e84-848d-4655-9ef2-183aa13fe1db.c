void CWE191_Integer_Underflow__short_min_postdec_08_bad()
{
    short data;
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = SHRT_MIN;
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}