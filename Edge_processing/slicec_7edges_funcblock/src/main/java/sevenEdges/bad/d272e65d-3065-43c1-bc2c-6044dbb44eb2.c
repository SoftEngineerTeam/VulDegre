void CWE191_Integer_Underflow__char_min_multiply_07_bad()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = CHAR_MIN;
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