void CWE124_Buffer_Underwrite__CWE839_negative_04_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use an invalid index */
        data = -5;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            int buffer[10] = { 0 };
            /* POTENTIAL FLAW: Attempt to access a negative index of the array
            * This code does not check to see if the array index is negative */
            if (data < 10)
            {
                buffer[data] = 1;
                /* Print the array values */
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
        }
    }
}