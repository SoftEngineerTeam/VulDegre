void CWE401_Memory_Leak__int_malloc_67b_badSink(CWE401_Memory_Leak__int_malloc_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}