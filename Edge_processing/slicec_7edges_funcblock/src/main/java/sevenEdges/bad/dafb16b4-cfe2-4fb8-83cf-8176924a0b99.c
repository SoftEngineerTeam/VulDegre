void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_66_bad()
{
    size_t data;
    size_t dataArray[5];
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
    /* put data in array */
    dataArray[2] = data;
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_66b_badSink(dataArray);
}