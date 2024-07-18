void CWE78_OS_Command_Injection__wchar_t_environment_popen_67b_badSink(CWE78_OS_Command_Injection__wchar_t_environment_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
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