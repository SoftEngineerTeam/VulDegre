void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_bad()
{
    FILE * data;
    data = NULL;
    /* POTENTIAL FLAW: Create a file handle using fopen() that may not be closed properly */
    data = fopen("BadSource_fopen.txt", "w+");
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64b_badSink(&data);
}