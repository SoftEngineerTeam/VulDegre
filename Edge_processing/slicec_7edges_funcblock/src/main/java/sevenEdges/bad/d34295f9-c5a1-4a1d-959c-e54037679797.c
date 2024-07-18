void CWE190_Integer_Overflow__unsigned_int_rand_add_14_bad()
{
    unsigned int data;
    data = 0;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}