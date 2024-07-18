void CWE191_Integer_Underflow__int64_t_fscanf_postdec_42_bad()
{
    int64_t data;
    data = 0LL;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}