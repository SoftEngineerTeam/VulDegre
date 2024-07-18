void CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_66_bad()
{
    FILE * data;
    FILE * dataArray[5];
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = freopen("BadSource_freopen.txt","w+",stdin);
    /* put data in array */
    dataArray[2] = data;
    CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_66b_badSink(dataArray);
}