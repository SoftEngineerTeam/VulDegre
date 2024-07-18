void CWE401_Memory_Leak__int64_t_realloc_22_badSink(int64_t * data)
{
    if(CWE401_Memory_Leak__int64_t_realloc_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}