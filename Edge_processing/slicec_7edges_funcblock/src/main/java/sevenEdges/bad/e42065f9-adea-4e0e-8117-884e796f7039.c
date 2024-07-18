void CWE675_Duplicate_Operations_on_Resource__w32CreateFile_65_bad()
{
    HANDLE data;
    /* define a function pointer */
    void (*funcPtr) (HANDLE) = CWE675_Duplicate_Operations_on_Resource__w32CreateFile_65b_badSink;
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
    /* use the function pointer */
    funcPtr(data);
}