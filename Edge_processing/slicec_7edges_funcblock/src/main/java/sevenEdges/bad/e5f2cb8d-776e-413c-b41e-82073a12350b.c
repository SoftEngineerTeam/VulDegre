void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_02_bad()
{
    FILE * data;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    if(1)
    {
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}