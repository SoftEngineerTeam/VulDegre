void CWE190_Integer_Overflow__short_max_add_17_bad()
{
    int i,j;
    short data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            short result = data + 1;
            printIntLine(result);
        }
    }
}