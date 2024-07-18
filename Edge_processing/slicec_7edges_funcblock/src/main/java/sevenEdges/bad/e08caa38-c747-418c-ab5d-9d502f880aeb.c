void CWE191_Integer_Underflow__int64_t_min_sub_32_bad()
{
    int64_t data;
    int64_t *dataPtr1 = &data;
    int64_t *dataPtr2 = &data;
    data = 0LL;
    {
        int64_t data = *dataPtr1;
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = LLONG_MIN;
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}