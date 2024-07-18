void CWE401_Memory_Leak__wchar_t_realloc_22_badSink(wchar_t * data)
{
    if(CWE401_Memory_Leak__wchar_t_realloc_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}