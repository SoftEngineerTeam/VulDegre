void CWE252_Unchecked_Return_Value__wchar_t_fprintf_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check the return value */
        fwprintf(stdout, L"%s\n", L"string");
        break;
    }
}