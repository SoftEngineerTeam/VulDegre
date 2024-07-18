void CWE534_Info_Exposure_Debug_Log__w32_wchar_t_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t password[100] = L"";
            size_t passwordLen = 0;
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            FILE * pFile = fopen("debug.txt", "a+");
            if (fgetws(password, 100, stdin) == NULL)
            {
                printLine("fgetws() failed");
                /* Restore NUL terminator if fgetws fails */
                password[0] = L'\0';
            }
            /* Remove the carriage return from the string that is inserted by fgetws() */
            passwordLen = wcslen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = L'\0';
            }
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
            /* FLAW: Write sensitive data to the log */
            fwprintf(pFile, L"User attempted access with password: %s\n", password);
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}