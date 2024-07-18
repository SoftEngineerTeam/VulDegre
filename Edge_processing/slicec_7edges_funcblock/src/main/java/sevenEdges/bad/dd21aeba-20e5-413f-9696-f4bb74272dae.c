void CWE78_OS_Command_Injection__char_environment_execlp_67_bad()
{
    char * data;
    CWE78_OS_Command_Injection__char_environment_execlp_67_structType myStruct;
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
    myStruct.structFirst = data;
    CWE78_OS_Command_Injection__char_environment_execlp_67b_badSink(myStruct);
}