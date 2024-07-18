void CWE665_Improper_Initialization__char_ncat_16_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    while(1)
    {
        /* FLAW: Do not initialize data */
        ; /* empty statement needed for some flow variants */
        break;
    }
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