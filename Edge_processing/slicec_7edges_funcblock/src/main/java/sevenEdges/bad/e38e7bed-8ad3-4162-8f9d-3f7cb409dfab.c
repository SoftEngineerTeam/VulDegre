void CWE191_Integer_Underflow__int64_t_min_sub_63b_badSink(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}