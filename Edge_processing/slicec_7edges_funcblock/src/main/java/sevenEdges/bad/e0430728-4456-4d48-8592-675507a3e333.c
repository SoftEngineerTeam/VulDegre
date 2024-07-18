void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_52_bad()
{
    wchar_t * password;
    /* Initialize Data */
    password = L"";
    password = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
    /* FLAW: Do not lock the memory */
    /* INCIDENTAL FLAW: CWE-259 Hardcoded Password */
    wcscpy(password, L"Password1234!");
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_52b_badSink(password);
}