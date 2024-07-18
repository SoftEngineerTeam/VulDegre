void CWE190_Integer_Overflow__unsigned_int_max_multiply_09_bad()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = UINT_MAX;
    }
    if(GLOBAL_CONST_TRUE)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}