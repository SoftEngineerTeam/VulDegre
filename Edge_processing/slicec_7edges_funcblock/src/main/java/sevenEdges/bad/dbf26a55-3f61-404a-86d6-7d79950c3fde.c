void CWE252_Unchecked_Return_Value__char_remove_03_bad()
{
    if(5==5)
    {
        /* FLAW: Do not check the return value */
        REMOVE("removemebad.txt");
    }
}