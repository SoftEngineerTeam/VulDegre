void CWE675_Duplicate_Operations_on_Resource__fopen_63_bad()
{
    FILE * data;
    data = NULL; /* Initialize data */
    data = fopen("BadSource_fopen.txt", "w+");
    /* POTENTIAL FLAW: Close the file in the source */
    fclose(data);
    CWE675_Duplicate_Operations_on_Resource__fopen_63b_badSink(&data);
}