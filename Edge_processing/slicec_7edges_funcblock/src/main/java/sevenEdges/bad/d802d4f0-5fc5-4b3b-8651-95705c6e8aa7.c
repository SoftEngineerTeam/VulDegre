void CWE190_Integer_Overflow__short_max_square_07_bad()
{
    short data;
    data = 0;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
            short result = data * data;
            printIntLine(result);
        }
    }
}