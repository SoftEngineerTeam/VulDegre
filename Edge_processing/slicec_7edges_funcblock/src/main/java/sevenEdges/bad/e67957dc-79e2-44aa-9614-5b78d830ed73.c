void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_32_bad()
{
    HANDLE data;
    HANDLE *dataPtr1 = &data;
    HANDLE *dataPtr2 = &data;
    /* Initialize data */
    data = INVALID_HANDLE_VALUE;
    {
        HANDLE data = *dataPtr1;
        /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        *dataPtr1 = data;
    }
    {
        HANDLE data = *dataPtr2;
        if (data != INVALID_HANDLE_VALUE)
        {
            /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
            _close((int)data);
        }
    }
}