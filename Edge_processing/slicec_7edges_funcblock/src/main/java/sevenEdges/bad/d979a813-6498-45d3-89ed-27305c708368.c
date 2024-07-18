void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_17_bad()
{
    int i,j;
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
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
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        fwprintf(stdout, data);
    }
}