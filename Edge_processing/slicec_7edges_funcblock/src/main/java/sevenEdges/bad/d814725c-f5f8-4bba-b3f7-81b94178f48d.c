void CWE78_OS_Command_Injection__wchar_t_file_popen_22_bad()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    CWE78_OS_Command_Injection__wchar_t_file_popen_22_badGlobal = 1; /* true */
    data = CWE78_OS_Command_Injection__wchar_t_file_popen_22_badSource(data);
    {
        FILE *pipe;
        /* POTENTIAL FLAW: Execute command in data possibly leading to command injection */
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}