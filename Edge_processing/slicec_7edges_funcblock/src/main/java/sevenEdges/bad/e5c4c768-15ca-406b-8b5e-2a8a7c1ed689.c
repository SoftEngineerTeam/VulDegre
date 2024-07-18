void CWE256_Plaintext_Storage_of_Password__w32_wchar_t_13_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            FILE *pFile;
            pFile = fopen("passwords.txt", "r");
            if (pFile != NULL)
            {
                /* POTENTIAL FLAW: Read the password from a file */
                if (fgetws(data, 100, pFile) == NULL)
                {
                    data[0] = L'\0';
                }
                fclose(pFile);
            }
            else
            {
                data[0] = L'\0';
            }
        }
    }
    if(GLOBAL_CONST_FIVE==5)
    {
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
}