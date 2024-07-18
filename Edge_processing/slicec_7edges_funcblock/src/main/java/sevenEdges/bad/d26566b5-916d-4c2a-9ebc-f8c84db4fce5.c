void CWE191_Integer_Underflow__int64_t_min_postdec_18_bad()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = LLONG_MIN;
    goto sink;
sink:
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}