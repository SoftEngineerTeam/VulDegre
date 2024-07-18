void CWE369_Divide_by_Zero__float_zero_16_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    while(1)
    {
        /* POTENTIAL FLAW: Set data to zero */
        data = 0.0F;
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        break;
    }
}