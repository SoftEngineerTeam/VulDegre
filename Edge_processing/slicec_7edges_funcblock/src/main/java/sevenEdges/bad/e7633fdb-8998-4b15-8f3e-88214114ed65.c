void CWE190_Integer_Overflow__short_max_square_67b_badSink(CWE190_Integer_Overflow__short_max_square_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
        /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
        short result = data * data;
        printIntLine(result);
    }
}