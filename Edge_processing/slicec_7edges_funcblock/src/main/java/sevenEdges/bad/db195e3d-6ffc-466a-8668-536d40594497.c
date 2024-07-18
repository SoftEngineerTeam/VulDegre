void CWE191_Integer_Underflow__char_rand_postdec_32_bad()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}