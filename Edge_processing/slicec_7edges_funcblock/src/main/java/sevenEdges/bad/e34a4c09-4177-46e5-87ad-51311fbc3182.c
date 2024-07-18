void CWE190_Integer_Overflow__short_rand_multiply_68b_badSink()
{
    short data = CWE190_Integer_Overflow__short_rand_multiply_68_badData;
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
        short result = data * 2;
        printIntLine(result);
    }
}