void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_bad()
{
    FILE * data;
    /* define a function pointer */
    void (*funcPtr) (FILE *) = badSink;
    data = NULL;
    /* POTENTIAL FLAW: Create a file handle using fopen() that may not be closed properly */
    data = fopen("BadSource_fopen.txt", "w+");
    /* use the function pointer */
    funcPtr(data);
}