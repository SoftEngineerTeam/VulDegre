void CWE191_Integer_Underflow__unsigned_int_min_sub_65_bad()
{
    unsigned int data;
    /* define a function pointer */
    void (*funcPtr) (unsigned int) = CWE191_Integer_Underflow__unsigned_int_min_sub_65b_badSink;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = 0;
    /* use the function pointer */
    funcPtr(data);
}