void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_w32ImpersonateNamedPipeClient_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t * pipeName = L"\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeW(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFFER_SIZE,
                        BUFFER_SIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            /* FLAW: ImpersonateNamedPipeClient() might fail, in which case the return value will be 0 (false), but
             * we are checking to see if the return value is greater than zero (which will be true) */
            if (ImpersonateNamedPipeClient(hPipe) > 0)
            {
                exit(1);
            }
            CloseHandle(hPipe);
        }
    }
}