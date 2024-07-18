void CWE190_Integer_Overflow__int64_t_max_add_45_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = LLONG_MAX;
    CWE190_Integer_Overflow__int64_t_max_add_45_badData = data;
    badSink();
}