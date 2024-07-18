void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_09_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        fwprintf(stdout, data);
    }
}