void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_66_bad()
{
    char * password;
    char * passwordArray[5];
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
    /* put password in array */
    passwordArray[2] = password;
    CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_66b_badSink(passwordArray);
}