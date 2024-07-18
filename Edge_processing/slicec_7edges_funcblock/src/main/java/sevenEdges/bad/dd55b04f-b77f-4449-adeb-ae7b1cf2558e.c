void CWE401_Memory_Leak__strdup_wchar_t_22_badSink(wchar_t * data)
{
    if(CWE401_Memory_Leak__strdup_wchar_t_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}