static void badSink()
{
    FILE * data = CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_45_badData;
    if (data != NULL)
    {
        /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
        CloseHandle((HANDLE)data);
    }
}