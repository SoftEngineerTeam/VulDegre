void CWE506_Embedded_Malicious_Code__file_transfer_connect_socket_03_bad()
{
    if(5==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            struct sockaddr_in service;
            SOCKET connectSocket = INVALID_SOCKET;
            char contents[65536]; /* Assume file contents is less than 65k to make this test case easier to implement */
            FILE * pFile;
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(contents, (int)(65535), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    /* Restore NUL terminator if fgets fails */
                    contents[0] = '\0';
                }
                fclose(pFile);
            }
            do
            {
#ifdef _WIN32
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
#endif
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                /* FLAW: Send the contents of a file over the network */
                if (send(connectSocket, contents, strlen(contents), 0) != strlen(contents))
                {
                    break;
                }
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(connectSocket);
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