void CWE191_Integer_Underflow__int64_t_rand_postdec_04_bad()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    if(STATIC_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}