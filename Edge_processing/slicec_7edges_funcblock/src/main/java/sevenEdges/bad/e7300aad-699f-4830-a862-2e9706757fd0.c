void CWE191_Integer_Underflow__int_fscanf_sub_11_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
            printIntLine(result);
        }
    }
}