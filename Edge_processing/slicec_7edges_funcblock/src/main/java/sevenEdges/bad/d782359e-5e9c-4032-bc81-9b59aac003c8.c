void CWE78_OS_Command_Injection__char_environment_system_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}