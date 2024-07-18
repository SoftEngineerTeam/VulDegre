void CWE78_OS_Command_Injection__char_connect_socket_execlp_68b_badSink()
{
    char * data = CWE78_OS_Command_Injection__char_connect_socket_execlp_68_badData;
    /* execlp - searches for the location of the command among
     * the directories specified by the PATH environment variable */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}