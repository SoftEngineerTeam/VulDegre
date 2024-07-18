void CWE134_Uncontrolled_Format_String__char_environment_printf_67_bad()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_environment_printf_67_structType myStruct;
    char dataBuffer[100] = "";
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
    CWE134_Uncontrolled_Format_String__char_environment_printf_67b_badSink(myStruct);
}