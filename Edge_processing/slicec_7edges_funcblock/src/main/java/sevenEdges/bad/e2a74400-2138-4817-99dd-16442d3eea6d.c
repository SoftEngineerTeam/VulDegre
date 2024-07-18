void CWE675_Duplicate_Operations_on_Resource__fopen_65b_badSink(FILE * data)
{
    /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
    fclose(data);
}