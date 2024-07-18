void CWE401_Memory_Leak__strdup_char_12_bad()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = strdup(myString);
            /* Use data */
            printLine(data);
        }
    }
    else
    {
        /* FIX: Use memory allocated on the stack with ALLOCA */
        data = (char *)ALLOCA(100*sizeof(char));
        /* Initialize then use data */
        strcpy(data, "a string");
        printLine(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
    else
    {
        /* FIX: Deallocate memory initialized in the source */
        free(data);
    }
}