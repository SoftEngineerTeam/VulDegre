void CWE401_Memory_Leak__int64_t_calloc_02_bad()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(1)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}