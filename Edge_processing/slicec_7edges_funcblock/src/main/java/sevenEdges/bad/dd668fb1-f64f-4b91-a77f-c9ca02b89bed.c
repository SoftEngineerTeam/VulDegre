void CWE427_Uncontrolled_Search_Path_Element__char_environment_66_bad()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        /* Append input from an environment variable to data */
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        /* If there is data in the environment variable */
        if (environment != NULL)
        {
            /* POTENTIAL FLAW: Read data from an environment variable */
            strncat(data+dataLen, environment, 250-dataLen-1);
        }
    }
    /* put data in array */
    dataArray[2] = data;
    CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_badSink(dataArray);
}