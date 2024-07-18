void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_67b_badSink(CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_67_structType myStruct)
{
    char * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        /* Use the password in LogonUser() to establish that it is "sensitive" */
        /* POTENTIAL FLAW: Using sensitive information that was possibly sent in plaintext over the network */
        if (LogonUserA(
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