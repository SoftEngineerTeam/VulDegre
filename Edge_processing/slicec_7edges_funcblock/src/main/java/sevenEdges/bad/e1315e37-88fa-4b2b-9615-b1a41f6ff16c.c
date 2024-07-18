wchar_t * CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_22_badSource(wchar_t * data)
{
    if(CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_22_badGlobal)
    {
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
    }
    return data;
}