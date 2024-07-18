void CWE190_Integer_Overflow__unsigned_int_rand_add_06_bad()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}