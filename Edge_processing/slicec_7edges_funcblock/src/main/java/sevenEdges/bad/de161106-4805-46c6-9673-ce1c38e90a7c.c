void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printLongLongLine(*data);
        free(data);
    }
}