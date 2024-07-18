void CWE191_Integer_Underflow__unsigned_int_min_sub_44_bad()
{
    unsigned int data;
    /* define a function pointer */
    void (*funcPtr) (unsigned int) = badSink;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = 0;
    /* use the function pointer */
    funcPtr(data);
}