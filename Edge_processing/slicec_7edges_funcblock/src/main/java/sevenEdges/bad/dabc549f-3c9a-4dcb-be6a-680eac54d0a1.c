void CWE191_Integer_Underflow__int_rand_sub_15_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int result = data - 1;
        printIntLine(result);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}