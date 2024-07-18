void CWE78_OS_Command_Injection__wchar_t_connect_socket_system_67b_badSink(CWE78_OS_Command_Injection__wchar_t_connect_socket_system_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}