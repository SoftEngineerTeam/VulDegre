void CWE191_Integer_Underflow__char_min_sub_07_bad()
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
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}