void CWE190_Integer_Overflow__int64_t_rand_add_63b_badSink(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}