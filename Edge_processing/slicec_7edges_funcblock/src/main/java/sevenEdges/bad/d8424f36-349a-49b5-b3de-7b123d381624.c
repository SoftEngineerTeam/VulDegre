void CWE665_Improper_Initialization__char_ncat_42_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data = badSource(data);
    {
        size_t sourceLen;
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        sourceLen = strlen(source);
        /* POTENTIAL FLAW: If data is not initialized properly, strncat() may not function correctly */
        strncat(data, source, sourceLen);
        printLine(data);
    }
}