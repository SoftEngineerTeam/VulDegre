void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_32_bad()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    data = NULL;
    {
        FILE * data = *dataPtr1;
        /* POTENTIAL FLAW: Open a file without closing it */
        data = fopen("BadSource_fopen.txt", "w+");
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}