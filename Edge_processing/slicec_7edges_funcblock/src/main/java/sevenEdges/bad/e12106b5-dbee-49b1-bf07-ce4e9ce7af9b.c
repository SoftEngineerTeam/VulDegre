void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_34_bad()
{
    HANDLE data;
    CWE675_Duplicate_Operations_on_Resource__w32CreateFile_34_unionType myUnion;
    data = INVALID_HANDLE_VALUE; /* Initialize data */
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    /* POTENTIAL FLAW: Close the file in the source */
    CloseHandle(data);
    myUnion.unionFirst = data;
    {
        HANDLE data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
        CloseHandle(data);
    }
}