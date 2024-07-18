void CWE253_Incorrect_Check_of_Function_Return_Value__char_remove_18_bad()
{
    goto sink;
sink:
    /* FLAW: remove() might fail, in which case the return value will be non-zero, but
     * we are checking to see if the return value is 0 */
    if (REMOVE("removemebad.txt") == 0)
    {
        printLine("remove failed!");
    }
}