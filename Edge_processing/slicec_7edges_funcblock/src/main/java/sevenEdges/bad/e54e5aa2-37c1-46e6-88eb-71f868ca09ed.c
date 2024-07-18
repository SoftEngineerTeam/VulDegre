void CWE369_Divide_by_Zero__float_fgets_61_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    data = CWE369_Divide_by_Zero__float_fgets_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}