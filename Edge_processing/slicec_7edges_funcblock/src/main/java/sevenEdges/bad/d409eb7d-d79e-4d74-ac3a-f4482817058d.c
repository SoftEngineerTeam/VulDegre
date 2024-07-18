void CWE369_Divide_by_Zero__int_fgets_modulo_34_bad()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_modulo_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly divide by zero */
        printIntLine(100 % data);
    }
}