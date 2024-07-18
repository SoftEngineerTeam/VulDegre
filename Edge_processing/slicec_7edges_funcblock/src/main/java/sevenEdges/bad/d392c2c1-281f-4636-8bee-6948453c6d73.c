void CWE252_Unchecked_Return_Value__wchar_t_rename_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
    }
}