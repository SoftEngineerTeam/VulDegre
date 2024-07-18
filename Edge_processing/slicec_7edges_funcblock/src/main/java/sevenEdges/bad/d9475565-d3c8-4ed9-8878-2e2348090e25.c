void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67b_badSink(CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}