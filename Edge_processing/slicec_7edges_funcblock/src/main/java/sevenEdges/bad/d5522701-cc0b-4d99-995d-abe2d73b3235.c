void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad()
{
    double * data;
    /* Initialize data */
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badSource(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printDoubleLine(*data);
    free(data);
}