FILE * CWE675_Duplicate_Operations_on_Resource__fopen_61b_badSource(FILE * data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    /* POTENTIAL FLAW: Close the file in the source */
    fclose(data);
    return data;
}