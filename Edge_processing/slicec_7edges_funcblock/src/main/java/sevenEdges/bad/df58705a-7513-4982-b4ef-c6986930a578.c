void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_65_bad()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_65b_badSink;
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