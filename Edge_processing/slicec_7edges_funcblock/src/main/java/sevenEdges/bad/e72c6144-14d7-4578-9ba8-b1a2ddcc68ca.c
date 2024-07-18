static void badSink()
{
    struct _twoIntsStruct * data = CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_badData;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}