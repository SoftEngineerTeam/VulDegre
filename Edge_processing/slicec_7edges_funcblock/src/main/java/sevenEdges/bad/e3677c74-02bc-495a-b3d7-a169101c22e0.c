void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_51_bad()
{
    size_t data;
    /* Initialize data */
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* POTENTIAL FLAW: Read data from the console using fgets() */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* Convert to unsigned int */
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_51b_badSink(data);
}