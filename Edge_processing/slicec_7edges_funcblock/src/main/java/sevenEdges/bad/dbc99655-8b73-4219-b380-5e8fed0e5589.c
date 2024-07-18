void CWE191_Integer_Underflow__int_min_postdec_01_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int result = data;
        printIntLine(result);
    }
}