void CWE252_Unchecked_Return_Value__char_fwrite_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
    }
}