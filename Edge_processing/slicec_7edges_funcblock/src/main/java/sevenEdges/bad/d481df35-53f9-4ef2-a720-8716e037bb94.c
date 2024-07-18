void CWE401_Memory_Leak__char_calloc_10_bad()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}