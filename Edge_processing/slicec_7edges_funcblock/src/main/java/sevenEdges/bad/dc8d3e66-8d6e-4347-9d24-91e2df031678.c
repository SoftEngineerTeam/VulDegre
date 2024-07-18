void CWE401_Memory_Leak__char_calloc_52_bad()
{
    char * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (char *)calloc(100, sizeof(char));
    /* Initialize and make use of data */
    strcpy(data, "A String");
    printLine(data);
    CWE401_Memory_Leak__char_calloc_52b_badSink(data);
}