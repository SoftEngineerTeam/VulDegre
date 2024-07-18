void CWE404_Improper_Resource_Shutdown__open_w32CloseHandle_54e_badSink(int data)
{
    if (data != -1)
    {
        /* FLAW: Attempt to close the file using CloseHandle() instead of close() */
        CloseHandle((HANDLE)data);
    }
}