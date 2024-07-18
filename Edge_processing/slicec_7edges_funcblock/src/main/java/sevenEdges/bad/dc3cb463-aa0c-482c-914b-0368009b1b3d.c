void CWE190_Integer_Overflow__short_max_multiply_67_bad()
{
    short data;
    CWE190_Integer_Overflow__short_max_multiply_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = SHRT_MAX;
    myStruct.structFirst = data;
    CWE190_Integer_Overflow__short_max_multiply_67b_badSink(myStruct);
}