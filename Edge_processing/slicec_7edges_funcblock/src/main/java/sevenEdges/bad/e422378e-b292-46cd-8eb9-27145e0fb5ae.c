void CWE191_Integer_Underflow__char_min_sub_34_bad()
{
    char data;
    CWE191_Integer_Underflow__char_min_sub_34_unionType myUnion;
    data = ' ';
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}