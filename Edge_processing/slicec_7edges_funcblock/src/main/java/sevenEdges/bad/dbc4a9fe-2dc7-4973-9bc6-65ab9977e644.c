void CWE252_Unchecked_Return_Value__wchar_t_fprintf_18_bad()
{
    goto sink;
sink:
    /* FLAW: Do not check the return value */
    fwprintf(stdout, L"%s\n", L"string");
}