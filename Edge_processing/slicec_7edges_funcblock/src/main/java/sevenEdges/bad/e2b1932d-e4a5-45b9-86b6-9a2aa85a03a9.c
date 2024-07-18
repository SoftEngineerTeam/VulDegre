void CWE78_OS_Command_Injection__char_console_w32_execvp_22_bad()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    CWE78_OS_Command_Injection__char_console_w32_execvp_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__char_console_w32_execvp_22_badSource(data);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* execvp - searches for the location of the command among
         * the directories specified by the PATH environment variable */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        EXECVP(COMMAND_INT, args);
    }
}