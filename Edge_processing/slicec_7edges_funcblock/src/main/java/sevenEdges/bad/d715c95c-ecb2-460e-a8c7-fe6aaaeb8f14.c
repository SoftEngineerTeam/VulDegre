void CWE190_Integer_Overflow__char_max_square_61_bad()
{
    char data;
    data = ' ';
    data = CWE190_Integer_Overflow__char_max_square_61b_badSource(data);
    {
        /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
        char result = data * data;
        printHexCharLine(result);
    }
}