void CWE78_OS_Command_Injection__wchar_t_file_execlp_42_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = badSource(data);
    /* wexeclp - searches for the location of the command among
     * the directories specified by the PATH environment variable */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}