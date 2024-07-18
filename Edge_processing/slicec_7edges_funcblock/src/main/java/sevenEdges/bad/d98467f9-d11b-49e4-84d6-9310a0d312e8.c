void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad()
{
    int64_t * data;
    /* define a function pointer */
    void (*funcPtr) (int64_t *) = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65b_badSink;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (int64_t *)malloc(sizeof(data));
    *data = 2147483643LL;
    /* use the function pointer */
    funcPtr(data);
}