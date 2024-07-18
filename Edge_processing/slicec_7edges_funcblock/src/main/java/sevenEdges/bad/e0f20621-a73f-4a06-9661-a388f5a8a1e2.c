void CWE190_Integer_Overflow__int_rand_add_42_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int result = data + 1;
        printIntLine(result);
    }
}