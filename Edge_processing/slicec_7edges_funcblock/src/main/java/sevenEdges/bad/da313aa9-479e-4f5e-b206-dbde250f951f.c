void CWE78_OS_Command_Injection__char_listen_socket_system_67b_badSink(CWE78_OS_Command_Injection__char_listen_socket_system_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}