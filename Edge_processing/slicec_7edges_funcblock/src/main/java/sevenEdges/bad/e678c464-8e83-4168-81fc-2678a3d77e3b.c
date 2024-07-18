void CWE404_Improper_Resource_Shutdown__freopen_w32_close_65b_badSink(FILE * data)
{
    if (data != NULL)
    {
        /* FLAW: Attempt to close the file using close() instead of fclose() */
        _close((int)data);
    }
}