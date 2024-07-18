void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_04_bad()
{
    FILE * data;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}