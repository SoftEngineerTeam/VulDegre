void CWE404_Improper_Resource_Shutdown__open_fclose_63b_badSink(int * dataPtr)
{
    int data = *dataPtr;
    if (data != -1)
    {
        /* FLAW: Attempt to close the file using fclose() instead of close() */
        fclose((FILE *)data);
    }
}