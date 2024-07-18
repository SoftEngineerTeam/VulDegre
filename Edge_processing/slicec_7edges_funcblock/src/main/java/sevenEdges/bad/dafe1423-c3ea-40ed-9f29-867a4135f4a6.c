void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64b_badSink(void * passwordVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    char * * passwordPtr = (char * *)passwordVoidPtr;
    /* dereference passwordPtr into password */
    char * password = (*passwordPtr);
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        /* Use the password in LogonUser() to establish that it is "sensitive" */
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
        /* POTENTIAL FLAW: Sensitive data possibly improperly locked */
        free(password);
    }
}