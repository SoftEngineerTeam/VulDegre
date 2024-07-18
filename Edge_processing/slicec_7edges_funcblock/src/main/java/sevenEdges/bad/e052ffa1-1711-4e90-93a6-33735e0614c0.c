void CWE401_Memory_Leak__int64_t_malloc_06_bad()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}