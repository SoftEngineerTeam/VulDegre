void CWE78_OS_Command_Injection__wchar_t_connect_socket_w32spawnl_66b_badSink(wchar_t * dataArray[])
{
    /* copy data out of dataArray */
    wchar_t * data = dataArray[2];
    /* wspawnl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}