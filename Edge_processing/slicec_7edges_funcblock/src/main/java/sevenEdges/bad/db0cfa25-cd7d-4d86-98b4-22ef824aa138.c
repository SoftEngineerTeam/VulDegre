void CWE124_Buffer_Underwrite__CWE839_negative_12_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Use an invalid index */
        data = -5;
    }
    else
    {
        /* FIX: Use a value greater than 0, but less than 10 to avoid attempting to
        * access an index of the array in the sink that is out-of-bounds */
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            int i;
            int buffer[10] = { 0 };
            /* FIX: Properly validate the array index and prevent a buffer underwrite */
            if (data >= 0 && data < (10))
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
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}