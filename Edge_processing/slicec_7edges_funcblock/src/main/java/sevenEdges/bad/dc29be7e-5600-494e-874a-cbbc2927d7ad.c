void CWE78_OS_Command_Injection__char_environment_w32_execvp_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE78_OS_Command_Injection__char_environment_w32_execvp_65b_badSink;
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
    /* use the function pointer */
    funcPtr(data);
}