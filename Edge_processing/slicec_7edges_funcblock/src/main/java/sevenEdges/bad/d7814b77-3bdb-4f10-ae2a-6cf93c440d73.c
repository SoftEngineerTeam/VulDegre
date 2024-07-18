void CWE190_Integer_Overflow__int_rand_multiply_04_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
            int result = data * 2;
            printIntLine(result);
        }
    }
}