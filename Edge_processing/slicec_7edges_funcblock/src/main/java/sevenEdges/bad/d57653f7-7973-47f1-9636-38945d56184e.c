void CWE401_Memory_Leak__char_realloc_05_bad()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}