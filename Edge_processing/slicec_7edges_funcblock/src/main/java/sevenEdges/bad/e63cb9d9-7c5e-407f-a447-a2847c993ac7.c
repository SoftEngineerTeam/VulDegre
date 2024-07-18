void CWE78_OS_Command_Injection__char_listen_socket_w32_spawnlp_68b_badSink()
{
    char * data = CWE78_OS_Command_Injection__char_listen_socket_w32_spawnlp_68_badData;
    /* spawnlp - searches for the location of the command among
     * the directories specified by the PATH environment variable */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}