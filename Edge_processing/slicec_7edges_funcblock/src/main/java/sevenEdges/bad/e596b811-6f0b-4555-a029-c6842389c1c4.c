void CWE90_LDAP_Injection__w32_char_listen_socket_31_bad()
{
    char * data;
    char dataBuffer[256] = "";
    data = dataBuffer;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t dataLen = strlen(data);
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            /* POTENTIAL FLAW: Read data using a listen socket */
            listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (listenSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(TCP_PORT);
            if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == SOCKET_ERROR)
            {
                break;
            }
            /* Abort on error or the connection was closed */
            recvResult = recv(acceptSocket, (char *)(data + dataLen), sizeof(char) * (256 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* Append null terminator */
            data[dataLen + recvResult / sizeof(char)] = '\0';
            /* Eliminate CRLF */
            replace = strchr(data, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(data, '\n');
            if (replace)
            {
                *replace = '\0';
            }
        }
        while (0);
        if (listenSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(listenSocket);
        }
        if (acceptSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(acceptSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            LDAP* pLdapConnection = NULL;
            ULONG connectSuccess = 0L;
            ULONG searchSuccess = 0L;
            LDAPMessage *pMessage = NULL;
            char filter[256];
            /* POTENTIAL FLAW: data concatenated into LDAP search, which could result in LDAP Injection*/
            _snprintf(filter, 256-1, "(cn=%s)", data);
            pLdapConnection = ldap_initA("localhost", LDAP_PORT);
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
            searchSuccess = ldap_search_ext_sA(
                                pLdapConnection,
                                "base",
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