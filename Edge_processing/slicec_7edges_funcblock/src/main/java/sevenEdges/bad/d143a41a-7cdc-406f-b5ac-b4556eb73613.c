void CWE191_Integer_Underflow__int64_t_min_multiply_16_bad()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = LLONG_MIN;
        break;
    }
    while(1)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        break;
    }
}