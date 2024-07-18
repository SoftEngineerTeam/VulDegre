void CWE252_Unchecked_Return_Value__char_fprintf_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        fprintf(stdout, "%s\n", "string");
    }
}