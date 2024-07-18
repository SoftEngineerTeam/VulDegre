void CWE190_Integer_Overflow__char_rand_multiply_03_bad()
{
    char data;
    data = ' ';
    if(5==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(5==5)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}