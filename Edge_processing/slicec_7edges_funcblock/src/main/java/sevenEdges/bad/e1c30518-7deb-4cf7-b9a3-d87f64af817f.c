void CWE78_OS_Command_Injection__wchar_t_file_w32_spawnvp_68b_badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_file_w32_spawnvp_68_badData;
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* wspawnvp - searches for the location of the command among
         * the directories specified by the PATH environment variable */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}