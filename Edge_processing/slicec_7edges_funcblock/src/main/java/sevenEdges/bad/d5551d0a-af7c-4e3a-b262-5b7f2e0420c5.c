static void badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_connect_socket_system_45_badData;
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}