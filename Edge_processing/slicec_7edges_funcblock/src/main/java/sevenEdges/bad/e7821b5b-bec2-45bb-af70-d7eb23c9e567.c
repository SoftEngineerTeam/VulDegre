void CWE252_Unchecked_Return_Value__char_puts_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        PUTS("string");
    }
}