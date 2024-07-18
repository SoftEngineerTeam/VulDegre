void CWE190_Integer_Overflow__int64_t_rand_multiply_06_bad()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    if(STATIC_CONST_FIVE==5)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}