void CWE78_OS_Command_Injection__char_environment_w32_execv_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        char * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            /* execv - specify the path where the command is located */
            /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
            EXECV(COMMAND_INT_PATH, args);
        }
    }
}