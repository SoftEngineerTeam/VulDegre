void CWE90_LDAP_Injection__w32_wchar_t_console_34_bad()
{
    wchar_t * data;
    CWE90_LDAP_Injection__w32_wchar_t_console_34_unionType myUnion;
    wchar_t dataBuffer[256] = L"";
    data = dataBuffer;
    {
        /* Read input from the console */
        size_t dataLen = wcslen(data);
        /* if there is room in data, read into it from the console */
        if (256-dataLen > 1)
        {
            /* POTENTIAL FLAW: Read data from the console */
            if (fgetws(data+dataLen, (int)(256-dataLen), stdin) != NULL)
            {
                /* The next few lines remove the carriage return from the string that is
                 * inserted by fgetws() */
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                /* Restore NUL terminator if fgetws fails */
                data[dataLen] = L'\0';
            }
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            LDAP* pLdapConnection = NULL;
            ULONG connectSuccess = 0L;
            ULONG searchSuccess = 0L;
            LDAPMessage *pMessage = NULL;
            wchar_t filter[256];
            /* POTENTIAL FLAW: data concatenated into LDAP search, which could result in LDAP Injection*/
            _snwprintf(filter, 256-1, L"(cn=%s)", data);
            pLdapConnection = ldap_initW(L"localhost", LDAP_PORT);
            if (pLdapConnection == NULL)
            {
                printLine("Initialization failed");
                exit(1);
            }
            connectSuccess = ldap_connect(pLdapConnection, NULL);
            if (connectSuccess != LDAP_SUCCESS)
            {
                printLine("Connection failed");
                exit(1);
            }
            searchSuccess = ldap_search_ext_sW(
                                pLdapConnection,
                                L"base",
                                LDAP_SCOPE_SUBTREE,
                                filter,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                LDAP_NO_LIMIT,
                                LDAP_NO_LIMIT,
                                &pMessage);
            if (searchSuccess != LDAP_SUCCESS)
            {
                printLine("Search failed");
                if (pMessage != NULL)
                {
                    ldap_msgfree(pMessage);
                }
                exit(1);
            }
            /* Typically you would do something with the search results, but this is a test case and we can ignore them */
            /* Free the results to avoid incidentals */
            if (pMessage != NULL)
            {
                ldap_msgfree(pMessage);
            }
            /* Close the connection */
            ldap_unbind(pLdapConnection);
        }
    }
}