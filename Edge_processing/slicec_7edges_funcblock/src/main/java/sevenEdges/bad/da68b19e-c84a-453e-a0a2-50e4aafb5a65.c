void CWE191_Integer_Underflow__short_rand_postdec_65_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = CWE191_Integer_Underflow__short_rand_postdec_65b_badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    /* use the function pointer */
    funcPtr(data);
}