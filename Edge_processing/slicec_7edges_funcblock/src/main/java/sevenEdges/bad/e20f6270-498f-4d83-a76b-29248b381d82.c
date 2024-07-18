void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_44_bad()
{
    FILE * data;
    /* define a function pointer */
    void (*funcPtr) (FILE *) = badSink;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    /* use the function pointer */
    funcPtr(data);
}