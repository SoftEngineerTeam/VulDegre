void CWE401_Memory_Leak__int64_t_malloc_51_bad()
{
    int64_t * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int64_t *)malloc(100*sizeof(int64_t));
    /* Initialize and make use of data */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    CWE401_Memory_Leak__int64_t_malloc_51b_badSink(data);
}