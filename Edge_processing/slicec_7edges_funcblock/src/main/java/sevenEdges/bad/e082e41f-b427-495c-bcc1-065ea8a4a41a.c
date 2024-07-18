void CWE78_OS_Command_Injection__wchar_t_file_w32_spawnv_68b_badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_file_w32_spawnv_68_badData;
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* wspawnv - specify the path where the command is located */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        _wspawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}