void CWE191_Integer_Underflow__short_min_multiply_67b_badSink(CWE191_Integer_Underflow__short_min_multiply_67_structType myStruct)
{
    short data = myStruct.structFirst;
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
        short result = data * 2;
        printIntLine(result);
    }
}