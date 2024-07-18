void CWE369_Divide_by_Zero__int_rand_divide_14_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        printIntLine(100 / data);
    }
}