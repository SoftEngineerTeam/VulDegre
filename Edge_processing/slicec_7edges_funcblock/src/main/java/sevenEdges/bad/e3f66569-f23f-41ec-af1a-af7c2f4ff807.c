void CWE369_Divide_by_Zero__float_zero_17_bad()
{
    int i,j;
    float data;
    /* Initialize data */
    data = 0.0F;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Set data to zero */
        data = 0.0F;
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}