void CWE191_Integer_Underflow__char_rand_multiply_31_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    {
        char dataCopy = data;
        char data = dataCopy;
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}