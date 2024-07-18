void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_61_bad()
{
    HANDLE data;
    /* Initialize data */
    data = INVALID_HANDLE_VALUE;
    data = CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_61b_badSource(data);
    if (data != INVALID_HANDLE_VALUE)
    {
        /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
        fclose((FILE *)data);
    }
}