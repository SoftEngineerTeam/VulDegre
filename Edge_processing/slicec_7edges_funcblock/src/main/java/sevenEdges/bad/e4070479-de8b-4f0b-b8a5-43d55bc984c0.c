void CWE401_Memory_Leak__int64_t_realloc_67b_badSink(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}