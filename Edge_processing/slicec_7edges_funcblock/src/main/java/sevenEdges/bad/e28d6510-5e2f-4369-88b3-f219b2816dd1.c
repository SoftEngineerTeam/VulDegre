void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_51_bad()
{
    FILE * data;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_51b_badSink(data);
}