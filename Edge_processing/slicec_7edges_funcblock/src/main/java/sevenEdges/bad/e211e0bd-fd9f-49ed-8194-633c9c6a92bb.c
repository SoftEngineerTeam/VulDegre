static void badSink()
{
    twoIntsStruct * data = CWE401_Memory_Leak__twoIntsStruct_realloc_45_badData;
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}