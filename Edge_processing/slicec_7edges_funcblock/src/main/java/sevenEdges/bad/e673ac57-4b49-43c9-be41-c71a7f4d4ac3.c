void CWE190_Integer_Overflow__int_rand_add_09_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
    }
}