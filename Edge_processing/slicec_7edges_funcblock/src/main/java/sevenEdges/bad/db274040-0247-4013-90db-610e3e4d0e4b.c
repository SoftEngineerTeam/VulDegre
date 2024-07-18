void CWE369_Divide_by_Zero__int_fgets_divide_31_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* POTENTIAL FLAW: Read data from the console using fgets() */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* Convert to int */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    {
        int dataCopy = data;
        int data = dataCopy;
        /* POTENTIAL FLAW: Possibly divide by zero */
        printIntLine(100 / data);
    }
}