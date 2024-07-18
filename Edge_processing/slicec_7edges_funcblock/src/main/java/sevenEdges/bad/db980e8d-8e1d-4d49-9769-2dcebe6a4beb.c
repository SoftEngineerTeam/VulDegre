void CWE190_Integer_Overflow__char_max_multiply_17_bad()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    for(j = 0; j < 1; j++)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}