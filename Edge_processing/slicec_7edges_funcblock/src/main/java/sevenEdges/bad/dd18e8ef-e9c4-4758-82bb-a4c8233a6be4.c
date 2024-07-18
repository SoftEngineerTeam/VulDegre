void CWE190_Integer_Overflow__int_max_multiply_68b_badSink()
{
    int data = CWE190_Integer_Overflow__int_max_multiply_68_badData;
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
        int result = data * 2;
        printIntLine(result);
    }
}