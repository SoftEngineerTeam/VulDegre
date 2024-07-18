void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_remove_11_bad()
{
    if(globalReturnsTrue())
    {
        /* FLAW: remove() might fail, in which case the return value will be non-zero, but
         * we are checking to see if the return value is 0 */
        if (REMOVE(L"removemebad.txt") == 0)
        {
            printLine("remove failed!");
        }
    }
}