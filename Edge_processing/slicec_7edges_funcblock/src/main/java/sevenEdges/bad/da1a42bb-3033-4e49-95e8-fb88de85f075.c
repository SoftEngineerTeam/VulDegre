void CWE15_External_Control_of_System_or_Configuration_Setting__w32_04_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        {
            WSADATA wsaData;
            BOOL wsaDataInit = FALSE;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            struct sockaddr_in service;
            int recvResult;
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                listenSocket = socket(PF_INET, SOCK_STREAM, 0);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(LISTEN_PORT);
                if (SOCKET_ERROR == bind(listenSocket, (struct sockaddr*)&service, sizeof(service)))
                {
                    break;
                }
                if (SOCKET_ERROR == listen(listenSocket, LISTEN_BACKLOG))
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == INVALID_SOCKET)
                {
                    break;
                }
                /* INCIDENTAL CWE 188 - reliance on data memory layout
                 * recv and friends return "number of bytes" received
                 * char's on our system, however, may not be "octets" (8-bit
                 * bytes) but could be just about anything.  Also,
                 * even if the external environment is ASCII or UTF8,
                 * the ANSI/ISO C standard does not dictate that the
                 * character set used by the actual language or character
                 * constants matches.
                 *
                 * In practice none of these are usually issues...
                 */
                /* FLAW: read the new hostname from a network socket */
                recvResult = recv(acceptSocket, data, 100 - 1, 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                data[recvResult] = '\0';
            }
            while (0);
            if (acceptSocket != INVALID_SOCKET)
            {
                closesocket(acceptSocket);
            }
            if (listenSocket != INVALID_SOCKET)
            {
                closesocket(listenSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    /* POTENTIAL FLAW: set the hostname to data obtained from a potentially external source */
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}