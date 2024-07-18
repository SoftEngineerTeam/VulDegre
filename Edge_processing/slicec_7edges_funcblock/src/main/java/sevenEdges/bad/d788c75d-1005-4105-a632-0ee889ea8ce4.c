void CWE191_Integer_Underflow__int_fscanf_multiply_42_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    data = badSource(data);
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
        int result = data * 2;
        printIntLine(result);
    }
}