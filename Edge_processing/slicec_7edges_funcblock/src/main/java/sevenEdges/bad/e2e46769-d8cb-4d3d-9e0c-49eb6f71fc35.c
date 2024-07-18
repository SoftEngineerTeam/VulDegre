void CWE404_Improper_Resource_Shutdown__fopen_w32_close_66_bad()
{
    FILE * data;
    FILE * dataArray[5];
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = fopen("BadSource_fopen.txt", "w+");
    /* put data in array */
    dataArray[2] = data;
    CWE404_Improper_Resource_Shutdown__fopen_w32_close_66b_badSink(dataArray);
}