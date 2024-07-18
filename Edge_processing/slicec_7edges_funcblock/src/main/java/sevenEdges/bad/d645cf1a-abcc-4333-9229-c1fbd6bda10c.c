void CWE78_OS_Command_Injection__char_connect_socket_execl_22_bad()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    CWE78_OS_Command_Injection__char_connect_socket_execl_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__char_connect_socket_execl_22_badSource(data);
    /* execl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}