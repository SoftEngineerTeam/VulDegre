void CWE191_Integer_Underflow__short_min_sub_09_bad()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = SHRT_MIN;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            short result = data - 1;
            printIntLine(result);
        }
    }
}