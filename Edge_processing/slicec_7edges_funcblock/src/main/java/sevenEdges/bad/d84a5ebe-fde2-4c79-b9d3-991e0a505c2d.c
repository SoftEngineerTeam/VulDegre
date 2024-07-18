void CWE252_Unchecked_Return_Value__wchar_t_fputs_10_bad()
{
    if(globalTrue)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
    }
}