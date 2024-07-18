void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_bad()
{
    FILE * data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType myStruct;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    myStruct.structFirst = data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67b_badSink(myStruct);
}