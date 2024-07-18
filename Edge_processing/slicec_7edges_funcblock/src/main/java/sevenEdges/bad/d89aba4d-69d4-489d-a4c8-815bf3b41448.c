void CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_65_bad()
{
    FILE * data;
    /* define a function pointer */
    void (*funcPtr) (FILE *) = CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_65b_badSink;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = freopen("BadSource_freopen.txt","w+",stdin);
    /* use the function pointer */
    funcPtr(data);
}