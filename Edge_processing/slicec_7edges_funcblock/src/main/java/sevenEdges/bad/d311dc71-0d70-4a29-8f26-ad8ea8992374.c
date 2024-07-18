void CWE252_Unchecked_Return_Value__char_putc_10_bad()
{
    if(globalTrue)
    {
        /* FLAW: Do not check the return value */
        putc((int)'A', stdout);
    }
}