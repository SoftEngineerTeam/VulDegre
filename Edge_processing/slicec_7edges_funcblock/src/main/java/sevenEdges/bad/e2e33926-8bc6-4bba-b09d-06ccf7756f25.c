void CWE369_Divide_by_Zero__int_rand_divide_09_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        printIntLine(100 / data);
    }
}