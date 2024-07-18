void CWE369_Divide_by_Zero__float_zero_09_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to zero */
        data = 0.0F;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}