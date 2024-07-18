void CWE252_Unchecked_Return_Value__char_putchar_18_bad()
{
    goto sink;
sink:
    /* FLAW: Do not check the return value */
    putchar((int)'A');
}