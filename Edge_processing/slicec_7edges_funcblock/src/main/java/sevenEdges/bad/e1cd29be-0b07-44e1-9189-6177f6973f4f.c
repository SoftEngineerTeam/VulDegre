void CWE401_Memory_Leak__strdup_wchar_t_68b_badSink()
{
    wchar_t * data = CWE401_Memory_Leak__strdup_wchar_t_68_badData;
    /* POTENTIAL FLAW: No deallocation of memory */
    /* no deallocation */
    ; /* empty statement needed for some flow variants */
}