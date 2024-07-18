void CWE665_Improper_Initialization__char_cat_21_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
        strcat(data, source);
        printLine(data);
    }
}