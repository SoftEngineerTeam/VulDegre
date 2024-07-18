void CWE78_OS_Command_Injection__wchar_t_environment_popen_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        wchar_t * data = *dataPtr1;
        {
            /* Append input from an environment variable to data */
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            /* If there is data in the environment variable */
            if (environment != NULL)
            {
                /* POTENTIAL FLAW: Read data from an environment variable */
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
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
}