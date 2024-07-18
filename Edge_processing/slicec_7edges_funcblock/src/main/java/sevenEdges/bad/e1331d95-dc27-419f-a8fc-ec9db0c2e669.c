void CWE273_Improper_Check_for_Dropped_Privileges__w32_ImpersonateNamedPipeClient_18_bad()
{
    goto sink;
sink:
    {
        HANDLE hPipe = INVALID_HANDLE_VALUE;
        hPipe = CreateNamedPipeA(
                    "\\\\.\\pipe\\test_pipe",
                    PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                    PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                    PIPE_UNLIMITED_INSTANCES,
                    BUFSIZE,
                    BUFSIZE,
                    NMPWAIT_USE_DEFAULT_WAIT,
                    NULL);
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            exit(1);
        }
        /* ConnectNamedPipe returns failure if a client connected between CreateNamedPipe and now,
         * which isn't actually an error in terms of waiting for a client. */
        if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
        {
            CloseHandle(hPipe);
            exit(1);
        }
        /* FLAW: Failed to check return status of ImpersonateNamedPipeClient
         * -- However, since we're not even DOING anything with the pipe
         * it's debatable whether this is really a bug
         */
        ImpersonateNamedPipeClient(hPipe);
        printLine("Impersonated");
        if (!RevertToSelf())
        {
            exit(1);
        }
        CloseHandle(hPipe);
    }
}