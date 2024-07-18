void CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_64_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = fopen("BadSource_fopen.txt", "w+");
    CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_64b_badSink(&data);
}