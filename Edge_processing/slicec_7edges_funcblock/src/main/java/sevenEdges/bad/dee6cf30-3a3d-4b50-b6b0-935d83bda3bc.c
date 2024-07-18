void CWE401_Memory_Leak__char_calloc_22_badSink(char * data)
{
    if(CWE401_Memory_Leak__char_calloc_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}