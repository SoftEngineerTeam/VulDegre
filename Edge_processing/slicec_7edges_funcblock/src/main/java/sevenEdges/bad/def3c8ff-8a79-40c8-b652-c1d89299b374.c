void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_remove_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: remove() might fail, in which case the return value will be non-zero, but
         * we are checking to see if the return value is 0 */
        if (REMOVE(L"removemebad.txt") == 0)
        {
            printLine("remove failed!");
        }
    }
    else
    {
        /* FIX: check for the correct return value */
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}