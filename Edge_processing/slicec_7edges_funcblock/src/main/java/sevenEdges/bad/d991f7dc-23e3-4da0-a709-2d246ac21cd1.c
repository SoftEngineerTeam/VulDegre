void CWE191_Integer_Underflow__int_rand_multiply_05_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(staticTrue)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
            int result = data * 2;
            printIntLine(result);
        }
    }
}