void CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_22_badSink(FILE * data)
{
    if(CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_22_badGlobal)
    {
        if (data != NULL)
        {
            /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
            CloseHandle((HANDLE)data);
        }
    }
}