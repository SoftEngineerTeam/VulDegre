void CWE190_Integer_Overflow__char_rand_square_52c_badSink(char data)
{
    {
        /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
        char result = data * data;
        printHexCharLine(result);
    }
}