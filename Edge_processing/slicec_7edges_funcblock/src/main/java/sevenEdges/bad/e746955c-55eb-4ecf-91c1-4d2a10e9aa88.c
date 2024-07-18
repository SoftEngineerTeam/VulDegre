void CWE191_Integer_Underflow__int64_t_rand_sub_12_bad()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    else
    {
        /* FIX: Use a small, non-zero value that will not cause an underflow in the sinks */
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
    else
    {
        /* FIX: Add a check to prevent an underflow from occurring */
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}