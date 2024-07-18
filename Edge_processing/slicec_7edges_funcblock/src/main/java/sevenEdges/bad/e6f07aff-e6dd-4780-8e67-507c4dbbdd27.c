void CWE401_Memory_Leak__int64_t_malloc_66b_badSink(int64_t * dataArray[])
{
    /* copy data out of dataArray */
    int64_t * data = dataArray[2];
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}