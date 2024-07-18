void CWE256_Plaintext_Storage_of_Password__w32_wchar_t_68b_badSink()
{
    wchar_t * data = CWE256_Plaintext_Storage_of_Password__w32_wchar_t_68_badData;
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        /* POTENTIAL FLAW: Attempt to login user with password from the source */
        if (LogonUserW(
                    username,
                    domain,
                    data,
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
    }
}