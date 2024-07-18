void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}