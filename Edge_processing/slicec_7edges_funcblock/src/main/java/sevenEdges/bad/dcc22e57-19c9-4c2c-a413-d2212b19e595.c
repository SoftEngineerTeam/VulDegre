void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_52c_badSink(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
        _close((int)data);
    }
}