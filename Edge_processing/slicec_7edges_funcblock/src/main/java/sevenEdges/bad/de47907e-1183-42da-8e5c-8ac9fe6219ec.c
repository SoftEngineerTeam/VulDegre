void CWE78_OS_Command_Injection__wchar_t_listen_socket_execlp_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    /* wexeclp - searches for the location of the command among
     * the directories specified by the PATH environment variable */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}