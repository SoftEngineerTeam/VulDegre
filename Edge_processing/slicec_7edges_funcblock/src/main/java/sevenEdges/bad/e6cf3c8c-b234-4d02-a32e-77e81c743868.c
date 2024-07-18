void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_65b_badSink;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
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