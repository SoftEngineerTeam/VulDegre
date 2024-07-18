void CWE190_Integer_Overflow__short_rand_multiply_01_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
        short result = data * 2;
        printIntLine(result);
    }
}