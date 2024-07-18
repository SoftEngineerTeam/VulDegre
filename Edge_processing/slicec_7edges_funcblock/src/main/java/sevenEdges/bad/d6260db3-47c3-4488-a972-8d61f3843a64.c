void CWE401_Memory_Leak__strdup_char_68b_badSink()
{
    char * data = CWE401_Memory_Leak__strdup_char_68_badData;
    /* POTENTIAL FLAW: No deallocation of memory */
    /* no deallocation */
    ; /* empty statement needed for some flow variants */
}