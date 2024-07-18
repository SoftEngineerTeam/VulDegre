void CWE401_Memory_Leak__strdup_char_16_bad()
{
    char * data;
    data = NULL;
    while(1)
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = strdup(myString);
            /* Use data */
            printLine(data);
        }
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
        break;
    }
}