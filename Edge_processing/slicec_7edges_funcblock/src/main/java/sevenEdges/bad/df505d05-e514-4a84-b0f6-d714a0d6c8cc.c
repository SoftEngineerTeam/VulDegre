void CWE252_Unchecked_Return_Value__char_fprintf_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: Do not check the return value */
        fprintf(stdout, "%s\n", "string");
    }
    else
    {
        /* FIX: check the return value */
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}