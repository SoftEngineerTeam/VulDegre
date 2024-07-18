void CWE190_Integer_Overflow__char_max_square_66b_badSink(char dataArray[])
{
    /* copy data out of dataArray */
    char data = dataArray[2];
    {
        /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
        char result = data * data;
        printHexCharLine(result);
    }
}