void CWE510_Trapdoor__ip_based_logic_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            struct sockaddr_in service, acceptService;
            int acceptServiceLen = sizeof(acceptService);
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            do
            {
#ifdef _WIN32
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
#endif
                listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(20000);
                if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                if (listen(listenSocket, 5) == SOCKET_ERROR)
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == SOCKET_ERROR)
                {
                    break;
                }
                if (getsockname(acceptSocket, (struct sockaddr *)&acceptService, &acceptServiceLen) == -1)
                {
                    break;
                }
                /* FLAW: IP-based logic */
                if (strcmp("192.168.30.123", inet_ntoa(acceptService.sin_addr)) == 0)
                {
                    if (send(acceptSocket, ADMIN_MESSAGE, strlen(ADMIN_MESSAGE), 0) ==  SOCKET_ERROR)
                    {
                        /* Do not alert user to trapdoor, no action */
                        break;
                    }
                }
                else
                {
                    if (send(acceptSocket, DEFAULT_MESSAGE, strlen(DEFAULT_MESSAGE), 0) == SOCKET_ERROR)
                    {
                        printLine("Send failed!");
                    }
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
    }
}