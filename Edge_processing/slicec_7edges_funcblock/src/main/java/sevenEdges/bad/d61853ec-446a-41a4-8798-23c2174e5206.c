void CWE190_Integer_Overflow__int64_t_max_add_61_bad()
{
    int64_t data;
    data = 0LL;
    data = CWE190_Integer_Overflow__int64_t_max_add_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}