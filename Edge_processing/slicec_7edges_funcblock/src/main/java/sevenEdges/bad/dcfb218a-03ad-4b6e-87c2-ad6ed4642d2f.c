void CWE401_Memory_Leak__char_malloc_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}