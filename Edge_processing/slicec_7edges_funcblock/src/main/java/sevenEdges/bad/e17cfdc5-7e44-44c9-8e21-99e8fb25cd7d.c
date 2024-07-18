void CWE252_Unchecked_Return_Value__wchar_t_fputs_03_bad()
{
    if(5==5)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
    }
}