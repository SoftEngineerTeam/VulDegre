void CWE401_Memory_Leak__wchar_t_calloc_22_badSink(wchar_t * data)
{
    if(CWE401_Memory_Leak__wchar_t_calloc_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}