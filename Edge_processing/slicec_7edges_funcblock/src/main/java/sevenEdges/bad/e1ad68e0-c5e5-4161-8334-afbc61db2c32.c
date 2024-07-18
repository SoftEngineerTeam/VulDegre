void CWE191_Integer_Underflow__char_rand_sub_04_bad()
{
    char data;
    data = ' ';
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}