void CWE401_Memory_Leak__twoIntsStruct_malloc_22_badSink(twoIntsStruct * data)
{
    if(CWE401_Memory_Leak__twoIntsStruct_malloc_22_badGlobal)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}