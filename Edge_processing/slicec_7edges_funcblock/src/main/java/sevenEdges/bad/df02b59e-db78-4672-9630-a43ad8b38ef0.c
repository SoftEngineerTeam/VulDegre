void CWE78_OS_Command_Injection__char_environment_w32_spawnlp_66_bad()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    /* put data in array */
    dataArray[2] = data;
    CWE78_OS_Command_Injection__char_environment_w32_spawnlp_66b_badSink(dataArray);
}