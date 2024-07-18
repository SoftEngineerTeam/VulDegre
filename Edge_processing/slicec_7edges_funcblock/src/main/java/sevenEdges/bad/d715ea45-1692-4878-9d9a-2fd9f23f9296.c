void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fputs_11_bad()
{
    if(globalReturnsTrue())
    {
        /* FLAW: fputws() might fail, in which case the return value will be WEOF (-1), but
         * we are checking to see if the return value is 0 */
        if (fputws(L"string", stdout) == 0)
        {
            printLine("fputws failed!");
        }
    }
}