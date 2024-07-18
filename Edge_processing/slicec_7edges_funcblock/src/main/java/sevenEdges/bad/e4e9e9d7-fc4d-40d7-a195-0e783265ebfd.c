void CWE191_Integer_Underflow__short_rand_multiply_44_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    /* use the function pointer */
    funcPtr(data);
}