void CWE78_OS_Command_Injection__wchar_t_console_w32spawnl_68b_badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_console_w32spawnl_68_badData;
    /* wspawnl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}