void CWE401_Memory_Leak__char_malloc_68_bad()
{
    char * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (char *)malloc(100*sizeof(char));
    /* Initialize and make use of data */
    strcpy(data, "A String");
    printLine(data);
    CWE401_Memory_Leak__char_malloc_68_badData = data;
    CWE401_Memory_Leak__char_malloc_68b_badSink();
}