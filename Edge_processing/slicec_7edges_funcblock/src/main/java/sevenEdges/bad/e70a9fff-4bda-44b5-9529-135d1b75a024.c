void CWE78_OS_Command_Injection__char_listen_socket_w32_spawnvp_22_bad()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    CWE78_OS_Command_Injection__char_listen_socket_w32_spawnvp_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__char_listen_socket_w32_spawnvp_22_badSource(data);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* spawnvp - searches for the location of the command among
         * the directories specified by the PATH environment variable */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}