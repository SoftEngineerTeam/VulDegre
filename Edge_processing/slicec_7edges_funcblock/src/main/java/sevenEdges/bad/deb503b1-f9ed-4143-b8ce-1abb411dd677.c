void CWE401_Memory_Leak__strdup_char_14_bad()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = strdup(myString);
            /* Use data */
            printLine(data);
        }
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}