void CWE190_Integer_Overflow__int_rand_add_14_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
    }
}