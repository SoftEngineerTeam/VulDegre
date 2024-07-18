void CWE191_Integer_Underflow__char_rand_sub_01_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        char result = data - 1;
        printHexCharLine(result);
    }
}