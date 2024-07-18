void CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_66b_badSink(int dataArray[])
{
    /* copy data out of dataArray */
    int data = dataArray[2];
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}