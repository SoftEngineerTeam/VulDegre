void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_badSink(struct _twoIntsStruct * dataArray[])
{
    /* copy data out of dataArray */
    struct _twoIntsStruct * data = dataArray[2];
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}