void CWE252_Unchecked_Return_Value__wchar_t_puts_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check the return value */
        PUTS(L"string");
        break;
    }
}