void CWE191_Integer_Underflow__char_min_multiply_67b_badSink(CWE191_Integer_Underflow__char_min_multiply_67_structType myStruct)
{
    char data = myStruct.structFirst;
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
        char result = data * 2;
        printHexCharLine(result);
    }
}