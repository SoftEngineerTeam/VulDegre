void CWE252_Unchecked_Return_Value__char_rename_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: Do not check the return value */
        RENAME(OLD_BAD_FILE_NAME, "newbadfilename.txt");
    }
    else
    {
        /* FIX: check the return value */
        if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}