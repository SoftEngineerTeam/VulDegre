void CWE194_Unexpected_Sign_Extension__fgets_memcpy_65_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = CWE194_Unexpected_Sign_Extension__fgets_memcpy_65b_badSink;
    /* Initialize data */
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* FLAW: Use a value input from the console using fgets() */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* Convert to short */
            data = (short)atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    /* use the function pointer */
    funcPtr(data);
}