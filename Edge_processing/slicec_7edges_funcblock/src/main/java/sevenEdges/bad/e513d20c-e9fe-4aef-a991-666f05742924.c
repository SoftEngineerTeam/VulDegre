void CWE191_Integer_Underflow__int_min_multiply_18_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    goto source;
source:
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    goto sink;
sink:
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
        int result = data * 2;
        printIntLine(result);
    }
}