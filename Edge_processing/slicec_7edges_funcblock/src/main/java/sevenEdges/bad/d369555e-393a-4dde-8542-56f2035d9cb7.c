void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad()
{
    double * data;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_badSink(data);
}