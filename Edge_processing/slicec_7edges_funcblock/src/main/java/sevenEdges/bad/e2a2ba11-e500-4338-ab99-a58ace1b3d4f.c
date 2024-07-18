void CWE404_Improper_Resource_Shutdown__open_fclose_17_bad()
{
    int j;
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    for(j = 0; j < 1; j++)
    {
        if (data != -1)
        {
            /* FLAW: Attempt to close the file using fclose() instead of close() */
            fclose((FILE *)data);
        }
    }
}