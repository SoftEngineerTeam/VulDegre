void CWE404_Improper_Resource_Shutdown__fopen_w32_close_51b_badSink(FILE * data)
{
    if (data != NULL)
    {
        /* FLAW: Attempt to close the file using close() instead of fclose() */
        _close((int)data);
    }
}