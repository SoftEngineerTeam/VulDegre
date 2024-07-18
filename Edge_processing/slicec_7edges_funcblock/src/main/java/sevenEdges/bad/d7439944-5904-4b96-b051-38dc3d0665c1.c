void CWE191_Integer_Underflow__char_min_multiply_66b_badSink(char dataArray[])
{
    /* copy data out of dataArray */
    char data = dataArray[2];
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
        char result = data * 2;
        printHexCharLine(result);
    }
}