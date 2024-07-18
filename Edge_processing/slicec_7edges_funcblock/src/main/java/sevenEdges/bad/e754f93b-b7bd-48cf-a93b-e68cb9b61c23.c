void CWE191_Integer_Underflow__int_fgets_sub_61_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    data = CWE191_Integer_Underflow__int_fgets_sub_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int result = data - 1;
        printIntLine(result);
    }
}