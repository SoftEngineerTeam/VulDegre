void CWE369_Divide_by_Zero__float_zero_06_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Set data to zero */
        data = 0.0F;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}