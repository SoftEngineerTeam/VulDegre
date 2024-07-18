void CWE369_Divide_by_Zero__int_fgets_divide_67_bad()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_divide_67_structType myStruct;
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
    myStruct.structFirst = data;
    CWE369_Divide_by_Zero__int_fgets_divide_67b_badSink(myStruct);
}