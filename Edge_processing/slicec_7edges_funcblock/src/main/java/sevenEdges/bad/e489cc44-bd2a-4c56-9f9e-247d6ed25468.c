void CWE253_Incorrect_Check_of_Function_Return_Value__char_w32CreateNamedPipe_14_bad()
{
    if(globalFive==5)
    {
        {
            char * pipeName = "\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeA(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, /* FILE_FLAG_FIRST_PIPE_INSTANCE - this flag must be set */
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFFER_SIZE,
                        BUFFER_SIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            /* FLAW: If CreateNamedPipeA() failed, the return value will be INVALID_HANDLE_VALUE,
               but we are checking to see if the return value is NULL */
            if (hPipe == NULL)
            {
                exit(1);
            }
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            /* We'll leave out most of the implementation since it has nothing to do with the CWE
             * and since the checkers are looking for certain function calls anyway */
            CloseHandle(hPipe);
        }
    }
}