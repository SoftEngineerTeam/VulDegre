void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    /* spawnl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}