void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (int64_t *)malloc(sizeof(data));
    *data = 2147483643LL;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_badSink(data);
}