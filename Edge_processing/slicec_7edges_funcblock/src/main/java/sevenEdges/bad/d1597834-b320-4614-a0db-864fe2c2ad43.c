void CWE401_Memory_Leak__char_realloc_09_bad()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}