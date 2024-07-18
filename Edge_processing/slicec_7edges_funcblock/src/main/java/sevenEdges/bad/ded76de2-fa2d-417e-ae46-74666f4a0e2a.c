void CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_68b_badSink()
{
    HANDLE data = CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_68_badDataForBadSink;
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}