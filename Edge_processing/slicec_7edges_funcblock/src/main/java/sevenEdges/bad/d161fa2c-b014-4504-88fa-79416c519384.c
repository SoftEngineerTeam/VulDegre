static void badSink()
{
    wchar_t * data = CWE78_OS_Command_Injection__wchar_t_file_execl_45_badData;
    /* wexecl - specify the path where the command is located */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}