void CWE401_Memory_Leak__strdup_char_45_bad()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = strdup(myString);
        /* Use data */
        printLine(data);
    }
    CWE401_Memory_Leak__strdup_char_45_badData = data;
    badSink();
}