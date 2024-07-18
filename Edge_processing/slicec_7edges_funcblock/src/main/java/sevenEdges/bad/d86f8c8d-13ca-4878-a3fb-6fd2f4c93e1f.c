int64_t * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61b_badSource(int64_t * data)
{
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (int64_t *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    return data;
}