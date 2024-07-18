void CWE253_Incorrect_Check_of_Function_Return_Value__char_puts_10_bad()
{
    if(globalTrue)
    {
        /* FLAW: puts() might fail, in which case the return value will be EOF (-1), but
         * we are checking to see if the return value is 0 */
        if (PUTS("string") == 0)
        {
            printLine("puts failed!");
        }
    }
}