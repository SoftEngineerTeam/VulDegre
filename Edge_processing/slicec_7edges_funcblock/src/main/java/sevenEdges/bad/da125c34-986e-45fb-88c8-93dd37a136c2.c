void CWE78_OS_Command_Injection__wchar_t_file_execl_61_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = CWE78_OS_Command_Injection__wchar_t_file_execl_61b_badSource(data);
    /* wexecl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}