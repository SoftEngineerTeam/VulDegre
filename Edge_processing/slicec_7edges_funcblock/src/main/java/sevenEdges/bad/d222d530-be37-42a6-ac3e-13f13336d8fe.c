void CWE78_OS_Command_Injection__wchar_t_file_popen_54e_badSink(wchar_t * data)
{
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