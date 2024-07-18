void CWE190_Integer_Overflow__char_max_add_14_bad()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}