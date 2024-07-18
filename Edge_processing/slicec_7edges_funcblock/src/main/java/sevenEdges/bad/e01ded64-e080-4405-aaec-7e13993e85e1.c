void CWE369_Divide_by_Zero__float_fscanf_09_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
        fscanf (stdin, "%f", &data);
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