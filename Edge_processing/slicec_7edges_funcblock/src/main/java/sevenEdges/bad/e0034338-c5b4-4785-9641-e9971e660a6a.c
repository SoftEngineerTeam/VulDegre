void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_34_bad()
{
    char * password;
    CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_34_unionType myUnion;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            /* Abort on error or the connection was closed, make sure to recv one
             * less char than is in the recv_buf in order to append a terminator */
            /* POTENTIAL FLAW: Reading sensitive data from the network */
            recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* Append null terminator */
            password[passwordLen + recvResult / sizeof(char)] = '\0';
            /* Eliminate CRLF */
            replace = strchr(password, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(password, '\n');
            if (replace)
            {
                *replace = '\0';
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            closesocket(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    myUnion.unionFirst = password;
    {
        char * password = myUnion.unionSecond;
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
}