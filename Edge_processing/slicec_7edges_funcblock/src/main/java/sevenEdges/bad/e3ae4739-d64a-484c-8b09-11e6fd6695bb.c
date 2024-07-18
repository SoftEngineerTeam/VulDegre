void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fwrite_15_bad()
{
    switch(6)
    {
    case 6:
        /* FLAW: fwrite() might fail, in which case the return value will not be equal to strlen(data),
         * but we are checking to see if the return value is less than 0 */
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) < 0)
        {
            printLine("fwrite failed!");
        }
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}