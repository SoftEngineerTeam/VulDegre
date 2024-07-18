void CWE78_OS_Command_Injection__wchar_t_console_w32_execv_22_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    CWE78_OS_Command_Injection__wchar_t_console_w32_execv_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__wchar_t_console_w32_execv_22_badSource(data);
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* wexecv - specify the path where the command is located */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        EXECV(COMMAND_INT_PATH, args);
    }
}