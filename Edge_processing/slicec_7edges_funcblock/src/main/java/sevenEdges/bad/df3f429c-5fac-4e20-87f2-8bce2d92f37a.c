void CWE404_Improper_Resource_Shutdown__open_fclose_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    /* put data in array */
    dataArray[2] = data;
    CWE404_Improper_Resource_Shutdown__open_fclose_66b_badSink(dataArray);
}