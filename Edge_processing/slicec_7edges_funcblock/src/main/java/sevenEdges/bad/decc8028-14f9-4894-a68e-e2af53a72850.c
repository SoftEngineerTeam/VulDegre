void CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_42_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource(data);
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}