void CWE191_Integer_Underflow__short_min_multiply_65_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = CWE191_Integer_Underflow__short_min_multiply_65b_badSink;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    /* use the function pointer */
    funcPtr(data);
}