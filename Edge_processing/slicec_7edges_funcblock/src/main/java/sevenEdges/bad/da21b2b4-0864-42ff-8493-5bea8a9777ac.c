void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_17_bad()
{
    int i,j;
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
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
    for(j = 0; j < 1; j++)
    {
        badVaSinkB(data, data);
    }
}