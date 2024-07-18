void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_rename_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: rename() might fail, in which case the return value will be non-zero, but
         * we are checking to see if the return value is 0 */
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
        {
            printLine("rename failed!");
        }
    }
}