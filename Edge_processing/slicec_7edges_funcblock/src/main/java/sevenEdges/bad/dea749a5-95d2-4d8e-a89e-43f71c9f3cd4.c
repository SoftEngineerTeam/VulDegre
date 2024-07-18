void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_puts_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: putws() might fail, in which case the return value will be WEOF (-1), but
         * we are checking to see if the return value is 0 */
        if (PUTS(L"string") == 0)
        {
            printLine("puts failed!");
        }
    }
}