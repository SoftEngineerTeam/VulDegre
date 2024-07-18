void CWE191_Integer_Underflow__char_rand_multiply_02_bad()
{
    char data;
    data = ' ';
    if(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(1)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}