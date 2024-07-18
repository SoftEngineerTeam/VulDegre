void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67_bad()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        /* Append input from an environment variable to data */
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        /* If there is data in the environment variable */
        if (environment != NULL)
        {
            /* POTENTIAL FLAW: Read data from an environment variable */
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67b_badSink(myStruct);
}