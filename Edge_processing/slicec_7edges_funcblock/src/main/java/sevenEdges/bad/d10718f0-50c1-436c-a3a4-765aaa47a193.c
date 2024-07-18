void CWE190_Integer_Overflow__short_max_square_11_bad()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
            short result = data * data;
            printIntLine(result);
        }
    }
}