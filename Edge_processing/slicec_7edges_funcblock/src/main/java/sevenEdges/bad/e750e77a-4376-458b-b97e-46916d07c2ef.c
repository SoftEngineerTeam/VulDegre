void CWE256_Plaintext_Storage_of_Password__w32_char_04_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        {
            FILE *pFile;
            pFile = fopen("passwords.txt", "r");
            if (pFile != NULL)
            {
                /* POTENTIAL FLAW: Read the password from a file */
                if (fgets(data, 100, pFile) == NULL)
                {
                    data[0] = '\0';
                }
                fclose(pFile);
            }
            else
            {
                data[0] = '\0';
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            /* POTENTIAL FLAW: Attempt to login user with password from the source */
            if (LogonUserA(
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