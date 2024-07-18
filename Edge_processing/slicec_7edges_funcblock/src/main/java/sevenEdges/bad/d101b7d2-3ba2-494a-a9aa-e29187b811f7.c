void CWE190_Integer_Overflow__short_max_square_16_bad()
{
    short data;
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
            short result = data * data;
            printIntLine(result);
        }
        break;
    }
}