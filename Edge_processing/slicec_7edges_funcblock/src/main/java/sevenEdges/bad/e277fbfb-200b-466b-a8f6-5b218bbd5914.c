void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(globalFive==5)
    {
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}