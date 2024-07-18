void CWE253_Incorrect_Check_of_Function_Return_Value__char_fprintf_02_bad()
{
    if(1)
    {
        /* FLAW: fprintf() might fail, in which case the return value will be negative, but
         * we are checking to see if the return value is 0 */
        if (fprintf(stdout, "%s\n", "string") == 0)
        {
            printLine("fprintf failed!");
        }
    }
}