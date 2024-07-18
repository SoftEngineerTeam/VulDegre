int CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_61b_badSource(int data)
{
    /* POTENTIAL FLAW: Open a file without closing it */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    return data;
}