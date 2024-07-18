void CWE427_Uncontrolled_Search_Path_Element__char_console_21_bad()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    badStatic = 1; /* true */
    data = badSource(data);
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}