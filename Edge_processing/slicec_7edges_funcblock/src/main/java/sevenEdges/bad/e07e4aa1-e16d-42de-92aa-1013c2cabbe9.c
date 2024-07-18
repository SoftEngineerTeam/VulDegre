void CWE401_Memory_Leak__int64_t_realloc_45_bad()
{
    int64_t * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    CWE401_Memory_Leak__int64_t_realloc_45_badData = data;
    badSink();
}