void CWE190_Integer_Overflow__short_max_add_22_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = SHRT_MAX;
    CWE190_Integer_Overflow__short_max_add_22_badGlobal = 1; /* true */
    CWE190_Integer_Overflow__short_max_add_22_badSink(data);
}