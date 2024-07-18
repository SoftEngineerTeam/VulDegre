void CWE191_Integer_Underflow__unsigned_int_rand_sub_31_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}