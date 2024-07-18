void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_68b_badSink()
{
    FILE * data = CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_68_badDataForBadSink;
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}