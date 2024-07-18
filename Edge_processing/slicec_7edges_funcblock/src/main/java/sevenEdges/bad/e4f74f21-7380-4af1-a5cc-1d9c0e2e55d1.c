void CWE78_OS_Command_Injection__char_listen_socket_w32_spawnv_42_bad()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = badSource(data);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* spawnv - specify the path where the command is located */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}