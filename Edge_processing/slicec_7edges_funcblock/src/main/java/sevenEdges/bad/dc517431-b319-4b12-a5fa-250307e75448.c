void CWE191_Integer_Underflow__int64_t_rand_sub_51b_badSink(int64_t data)
{
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}