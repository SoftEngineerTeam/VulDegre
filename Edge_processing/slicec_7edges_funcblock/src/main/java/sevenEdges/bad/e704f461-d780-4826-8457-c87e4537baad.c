void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67b_badSink(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType myStruct)
{
    wchar_t * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        /* Use the password in LogonUser() to establish that it is "sensitive" */
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &pHandle) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(pHandle);
        }
        else
        {
            printLine("Unable to login.");
        }
        /* POTENTIAL FLAW: Sensitive data possibly improperly locked */
        free(password);
    }
}