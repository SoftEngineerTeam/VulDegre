void CWE78_OS_Command_Injection__wchar_t_environment_system_41_badSink(wchar_t * data)
{
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}