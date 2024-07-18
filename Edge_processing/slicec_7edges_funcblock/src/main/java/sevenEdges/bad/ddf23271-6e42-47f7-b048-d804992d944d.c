void CWE191_Integer_Underflow__short_min_postdec_67_bad()
{
    short data;
    CWE191_Integer_Underflow__short_min_postdec_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    myStruct.structFirst = data;
    CWE191_Integer_Underflow__short_min_postdec_67b_badSink(myStruct);
}