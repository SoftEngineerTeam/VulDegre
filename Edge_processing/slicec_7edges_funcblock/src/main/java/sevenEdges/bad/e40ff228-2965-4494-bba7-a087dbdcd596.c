void CWE319_Cleartext_Tx_Sensitive_Info__w32_wchar_t_connect_socket_64b_badSink(void * passwordVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    wchar_t * * passwordPtr = (wchar_t * *)passwordVoidPtr;
    /* dereference passwordPtr into password */
    wchar_t * password = (*passwordPtr);
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        /* Use the password in LogonUser() to establish that it is "sensitive" */
        /* POTENTIAL FLAW: Using sensitive information that was possibly sent in plaintext over the network */
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
    }
}