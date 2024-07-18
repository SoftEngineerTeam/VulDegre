void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_badSink(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}