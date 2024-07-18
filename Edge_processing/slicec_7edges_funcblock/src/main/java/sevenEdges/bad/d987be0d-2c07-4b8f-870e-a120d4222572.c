void CWE78_OS_Command_Injection__wchar_t_environment_system_68b_badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_environment_system_68_badData;
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}