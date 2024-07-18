void CWE401_Memory_Leak__wchar_t_realloc_68b_badSink()
{
    wchar_t * data = CWE401_Memory_Leak__wchar_t_realloc_68_badData;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}