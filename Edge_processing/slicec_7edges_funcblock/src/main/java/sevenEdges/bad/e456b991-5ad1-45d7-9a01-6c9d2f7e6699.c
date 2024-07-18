void CWE191_Integer_Underflow__unsigned_int_rand_postdec_03_bad()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}