void CWE688_Function_Call_With_Incorrect_Variable_or_Reference_as_Argument__basic_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            /* FLAW: int argument passed, expecting string argument */
            sprintf(dest, "%s", intFive);
            printLine(dest);
        }
    }
    else
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            /* FIX: use the correct format string */
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}