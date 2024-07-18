void CWE190_Integer_Overflow__int_fscanf_add_61_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    data = CWE190_Integer_Overflow__int_fscanf_add_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int result = data + 1;
        printIntLine(result);
    }
}