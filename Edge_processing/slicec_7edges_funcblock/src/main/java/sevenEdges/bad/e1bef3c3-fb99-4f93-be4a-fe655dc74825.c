void CWE78_OS_Command_Injection__char_file_system_52c_badSink(char * data)
{
    /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}