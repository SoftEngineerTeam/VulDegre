void CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_bad()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__wchar_t_connect_socket_system_22_badSource(data);
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}