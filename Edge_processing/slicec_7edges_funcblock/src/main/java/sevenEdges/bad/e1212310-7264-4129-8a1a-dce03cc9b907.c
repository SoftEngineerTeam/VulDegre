void CWE401_Memory_Leak__strdup_char_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE401_Memory_Leak__strdup_char_65b_badSink;
    data = NULL;
    {
        char myString[] = "myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = strdup(myString);
        /* Use data */
        printLine(data);
    }
    /* use the function pointer */
    funcPtr(data);
}