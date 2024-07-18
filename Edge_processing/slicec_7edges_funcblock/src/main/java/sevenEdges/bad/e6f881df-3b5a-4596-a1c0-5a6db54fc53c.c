void CWE253_Incorrect_Check_of_Function_Return_Value__char_rename_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: rename() might fail, in which case the return value will be non-zero, but
         * we are checking to see if the return value is 0 */
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
        {
            printLine("rename failed!");
        }
    }
}