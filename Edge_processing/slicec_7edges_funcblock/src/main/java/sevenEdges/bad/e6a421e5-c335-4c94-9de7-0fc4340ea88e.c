void CWE190_Integer_Overflow__unsigned_int_rand_multiply_65_bad()
{
    unsigned int data;
    /* define a function pointer */
    void (*funcPtr) (unsigned int) = CWE190_Integer_Overflow__unsigned_int_rand_multiply_65b_badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    /* use the function pointer */
    funcPtr(data);
}