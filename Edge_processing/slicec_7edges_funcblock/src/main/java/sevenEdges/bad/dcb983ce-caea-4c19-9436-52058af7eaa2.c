void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_51b_badSink(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
        fclose((FILE *)data);
    }
}