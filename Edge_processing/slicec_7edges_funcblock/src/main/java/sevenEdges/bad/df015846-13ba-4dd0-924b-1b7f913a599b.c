void CWE190_Integer_Overflow__char_max_add_54_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = CHAR_MAX;
    CWE190_Integer_Overflow__char_max_add_54b_badSink(data);
}