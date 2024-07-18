void CWE190_Integer_Overflow__short_rand_square_01_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    {
        /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
        short result = data * data;
        printIntLine(result);
    }
}