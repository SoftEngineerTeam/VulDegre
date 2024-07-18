void CWE190_Integer_Overflow__int64_t_max_multiply_67_bad()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_max_multiply_67_structType myStruct;
    data = 0LL;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = LLONG_MAX;
    myStruct.structFirst = data;
    CWE190_Integer_Overflow__int64_t_max_multiply_67b_badSink(myStruct);
}