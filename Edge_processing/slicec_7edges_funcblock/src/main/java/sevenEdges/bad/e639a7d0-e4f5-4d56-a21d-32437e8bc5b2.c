void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fprintf_02_bad()
{
    if(1)
    {
        /* FLAW: fwprintf() might fail, in which case the return value will be negative, but
         * we are checking to see if the return value is 0 */
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
        {
            printLine("fwprintf failed!");
        }
    }
}