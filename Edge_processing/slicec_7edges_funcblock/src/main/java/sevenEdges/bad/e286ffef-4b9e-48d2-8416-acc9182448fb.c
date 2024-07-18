void CWE191_Integer_Underflow__char_min_multiply_44_bad()
{
    char data;
    /* define a function pointer */
    void (*funcPtr) (char) = badSink;
    data = ' ';
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
    /* use the function pointer */
    funcPtr(data);
}