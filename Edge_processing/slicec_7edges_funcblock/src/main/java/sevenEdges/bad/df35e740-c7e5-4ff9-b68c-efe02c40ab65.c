void CWE252_Unchecked_Return_Value__char_puts_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check the return value */
        PUTS("string");
        break;
    }
}