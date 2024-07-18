void CWE401_Memory_Leak__int64_t_calloc_68b_badSink()
{
    int64_t * data = CWE401_Memory_Leak__int64_t_calloc_68_badData;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}