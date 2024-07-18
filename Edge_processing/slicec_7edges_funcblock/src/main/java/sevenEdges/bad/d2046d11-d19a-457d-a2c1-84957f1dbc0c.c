void CWE253_Incorrect_Check_of_Function_Return_Value__char_fputs_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: fputs() might fail, in which case the return value will be EOF (-1), but
         * we are checking to see if the return value is 0 */
        if (fputs("string", stdout) == 0)
        {
            printLine("fputs failed!");
        }
    }
}