void CWE134_Uncontrolled_Format_String__char_environment_fprintf_07_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticFive==5)
    {
        {
            /* Append input from an environment variable to data */
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            /* If there is data in the environment variable */
            if (environment != NULL)
            {
                /* POTENTIAL FLAW: Read data from an environment variable */
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        fprintf(stdout, data);
    }
}