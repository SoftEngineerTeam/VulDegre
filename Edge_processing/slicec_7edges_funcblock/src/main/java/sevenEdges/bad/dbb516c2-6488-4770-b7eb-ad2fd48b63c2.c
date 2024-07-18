static void badSink()
{
    int64_t data = CWE191_Integer_Underflow__int64_t_rand_sub_45_badData;
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}