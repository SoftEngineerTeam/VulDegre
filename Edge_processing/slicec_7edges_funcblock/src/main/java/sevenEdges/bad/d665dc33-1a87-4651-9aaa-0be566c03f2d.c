void CWE78_OS_Command_Injection__wchar_t_listen_socket_w32spawnl_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    /* wspawnl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}