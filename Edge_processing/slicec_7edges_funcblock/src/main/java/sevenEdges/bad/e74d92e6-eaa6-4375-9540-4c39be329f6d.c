void CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_01_bad()
{
    {
        char * password = (char *)ALLOCA(100*sizeof(char));
        size_t passwordLen = 0;
        HANDLE hUser;
        char * username = "User";
        char * domain = "Domain";
        /* Initialize password */
        password[0] = '\0';
        if (fgets(password, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            /* Restore NUL terminator if fgets fails */
            password[0] = '\0';
        }
        /* Remove the carriage return from the string that is inserted by fgets() */
        passwordLen = strlen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = '\0';
        }
        /* Use the password in LogonUser() to establish that it is "sensitive" */
        if (LogonUserA(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &hUser) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(hUser);
        }
        else
        {
            printLine("Unable to login.");
        }
        /* FLAW: Release password from the stack without first clearing the buffer */
    }
}