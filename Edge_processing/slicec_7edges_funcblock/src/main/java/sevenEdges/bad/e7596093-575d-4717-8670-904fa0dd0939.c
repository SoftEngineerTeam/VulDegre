void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_66b_badSink(HANDLE dataArray[])
{
    /* copy data out of dataArray */
    HANDLE data = dataArray[2];
    if (data != INVALID_HANDLE_VALUE)
    {
        /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
        _close((int)data);
    }
}