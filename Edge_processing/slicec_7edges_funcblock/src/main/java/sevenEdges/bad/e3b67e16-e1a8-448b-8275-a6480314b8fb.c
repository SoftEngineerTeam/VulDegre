void CWE401_Memory_Leak__char_calloc_67b_badSink(CWE401_Memory_Leak__char_calloc_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}