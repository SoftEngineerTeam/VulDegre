void CWE252_Unchecked_Return_Value__wchar_t_fwrite_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
    }
}