void CWE191_Integer_Underflow__char_rand_multiply_07_bad()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(staticFive==5)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}