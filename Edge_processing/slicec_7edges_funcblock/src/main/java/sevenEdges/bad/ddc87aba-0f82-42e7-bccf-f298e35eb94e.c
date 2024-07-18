static void badSink()
{
    char data = CWE190_Integer_Overflow__char_rand_square_45_badData;
    {
        /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
        char result = data * data;
        printHexCharLine(result);
    }
}