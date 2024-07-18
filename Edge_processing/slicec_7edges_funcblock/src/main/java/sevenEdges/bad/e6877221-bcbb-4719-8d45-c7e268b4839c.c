void CWE401_Memory_Leak__wchar_t_realloc_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}