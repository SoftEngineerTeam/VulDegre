void CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_34_bad()
{
    HANDLE data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_34_unionType myUnion;
    /* Initialize data */
    data = INVALID_HANDLE_VALUE;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    myUnion.unionFirst = data;
    {
        HANDLE data = myUnion.unionSecond;
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}