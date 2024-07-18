void CWE191_Integer_Underflow__char_min_postdec_21_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
    badStatic = 1; /* true */
    badSink(data);
}