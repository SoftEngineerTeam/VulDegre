void CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_67_bad()
{
    HANDLE data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_67_structType myStruct;
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
    myStruct.structFirst = data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_67b_badSink(myStruct);
}