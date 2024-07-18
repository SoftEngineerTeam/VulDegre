void CWE191_Integer_Underflow__int_rand_sub_04_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
            printIntLine(result);
        }
    }
}