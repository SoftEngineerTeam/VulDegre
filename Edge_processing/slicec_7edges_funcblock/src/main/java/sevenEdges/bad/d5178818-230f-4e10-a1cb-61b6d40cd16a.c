void CWE78_OS_Command_Injection__char_console_popen_21_bad()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        FILE *pipe;
        /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}