void CWE78_OS_Command_Injection__char_environment_system_21_bad()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    badStatic = 1; /* true */
    data = badSource(data);
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}