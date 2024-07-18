void CWE369_Divide_by_Zero__int_fscanf_divide_14_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        printIntLine(100 / data);
    }
}