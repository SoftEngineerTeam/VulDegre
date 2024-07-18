void CWE252_Unchecked_Return_Value__char_fputs_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        fputs("string", stdout);
    }
}