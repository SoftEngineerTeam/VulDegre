void CWE401_Memory_Leak__int_malloc_66b_badSink(int * dataArray[])
{
    /* copy data out of dataArray */
    int * data = dataArray[2];
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}