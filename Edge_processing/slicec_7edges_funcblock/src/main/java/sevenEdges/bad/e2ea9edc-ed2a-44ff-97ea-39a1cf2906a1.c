void CWE190_Integer_Overflow__char_rand_square_32_bad()
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
            /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}