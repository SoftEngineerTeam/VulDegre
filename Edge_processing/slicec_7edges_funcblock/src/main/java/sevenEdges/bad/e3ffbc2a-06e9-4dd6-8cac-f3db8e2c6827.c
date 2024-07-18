void CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_68b_badSink()
{
    FILE * data = CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_68_badDataForBadSink;
    if (data != NULL)
    {
        /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
        CloseHandle((HANDLE)data);
    }
}