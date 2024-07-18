void CWE401_Memory_Leak__char_malloc_11_bad()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}