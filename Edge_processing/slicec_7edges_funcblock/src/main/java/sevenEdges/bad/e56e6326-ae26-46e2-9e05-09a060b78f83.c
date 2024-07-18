void CWE688_Function_Call_With_Incorrect_Variable_or_Reference_as_Argument__basic_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            /* FLAW: int argument passed, expecting string argument */
            sprintf(dest, "%s", intFive);
            printLine(dest);
        }
    }
}