void CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_65_bad()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_65b_badSink;
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
    /* use the function pointer */
    funcPtr(data);
}