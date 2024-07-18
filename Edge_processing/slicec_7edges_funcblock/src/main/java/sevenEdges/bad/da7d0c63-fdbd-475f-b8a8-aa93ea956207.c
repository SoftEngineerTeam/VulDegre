void CWE401_Memory_Leak__char_realloc_64_bad()
{
    char * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (char *)realloc(data, 100*sizeof(char));
    /* Initialize and make use of data */
    strcpy(data, "A String");
    printLine(data);
    CWE401_Memory_Leak__char_realloc_64b_badSink(&data);
}