static void badSink()
{
    HANDLE data = CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_45_badData;
    if (data != INVALID_HANDLE_VALUE)
    {
        /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
        fclose((FILE *)data);
    }
}