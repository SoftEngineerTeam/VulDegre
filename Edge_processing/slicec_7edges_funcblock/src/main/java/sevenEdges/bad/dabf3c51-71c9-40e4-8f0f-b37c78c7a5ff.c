void CWE252_Unchecked_Return_Value__wchar_t_fwrite_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: Do not check the return value */
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
    }
    else
    {
        /* FIX: check the return value */
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) != wcslen(L"string"))
        {
            printLine("fwrite failed!");
        }
    }
}