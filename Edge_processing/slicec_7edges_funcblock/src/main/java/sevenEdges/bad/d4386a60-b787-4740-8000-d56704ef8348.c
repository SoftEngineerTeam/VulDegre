void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
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
                wcsncat(data+dataLen, environment, 250-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
        PUTENV(data);
    }
}