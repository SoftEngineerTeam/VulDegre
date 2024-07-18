void CWE78_OS_Command_Injection__char_connect_socket_popen_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
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