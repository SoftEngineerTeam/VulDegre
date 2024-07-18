void CWE191_Integer_Underflow__int_min_sub_08_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
            printIntLine(result);
        }
    }
}