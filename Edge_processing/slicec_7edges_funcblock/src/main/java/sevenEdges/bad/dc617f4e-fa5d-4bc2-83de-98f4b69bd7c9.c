void CWE252_Unchecked_Return_Value__wchar_t_fputs_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
    }
}