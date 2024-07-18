void CWE190_Integer_Overflow__char_max_add_05_bad()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}