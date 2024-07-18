void CWE665_Improper_Initialization__char_ncat_67b_badSink(CWE665_Improper_Initialization__char_ncat_67_structType myStruct)
{
    char * data = myStruct.structFirst;
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