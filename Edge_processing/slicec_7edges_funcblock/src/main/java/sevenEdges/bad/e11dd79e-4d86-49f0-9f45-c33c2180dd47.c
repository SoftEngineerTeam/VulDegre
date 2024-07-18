void CWE190_Integer_Overflow__unsigned_int_rand_multiply_53d_badSink(unsigned int data)
{
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}