void CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_63_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_63b_badSink(&data);
}