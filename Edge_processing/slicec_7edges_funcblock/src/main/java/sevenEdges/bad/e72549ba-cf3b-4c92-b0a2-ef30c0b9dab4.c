void CWE252_Unchecked_Return_Value__wchar_t_fputc_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        fputwc((wchar_t)L'A', stdout);
    }
}