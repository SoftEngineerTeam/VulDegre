void CWE190_Integer_Overflow__char_rand_square_11_bad()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}