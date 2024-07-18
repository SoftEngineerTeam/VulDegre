void CWE78_OS_Command_Injection__char_listen_socket_popen_42_bad()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
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