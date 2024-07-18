void CWE191_Integer_Underflow__unsigned_int_rand_postdec_67_bad()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_rand_postdec_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    CWE191_Integer_Underflow__unsigned_int_rand_postdec_67b_badSink(myStruct);
}