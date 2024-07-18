void CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_52_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = freopen("BadSource_freopen.txt","w+",stdin);
    CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_52b_badSink(data);
}