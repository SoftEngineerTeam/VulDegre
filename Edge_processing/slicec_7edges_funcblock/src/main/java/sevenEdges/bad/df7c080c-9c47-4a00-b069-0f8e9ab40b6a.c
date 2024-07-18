void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fwrite_14_bad()
{
    if(globalFive==5)
    {
        /* FLAW: fwrite() might fail, in which case the return value will not be equal to strlen(data),
         * but we are checking to see if the return value is less than 0 */
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) < 0)
        {
            printLine("fwrite failed!");
        }
    }
}