void CWE401_Memory_Leak__int64_t_calloc_66_bad()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int64_t *)calloc(100, sizeof(int64_t));
    /* Initialize and make use of data */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    /* put data in array */
    dataArray[2] = data;
    CWE401_Memory_Leak__int64_t_calloc_66b_badSink(dataArray);
}