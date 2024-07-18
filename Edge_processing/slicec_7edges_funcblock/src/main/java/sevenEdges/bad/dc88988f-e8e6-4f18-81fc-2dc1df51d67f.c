void CWE190_Integer_Overflow__int_rand_multiply_52c_badSink(int data)
{
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
        int result = data * 2;
        printIntLine(result);
    }
}