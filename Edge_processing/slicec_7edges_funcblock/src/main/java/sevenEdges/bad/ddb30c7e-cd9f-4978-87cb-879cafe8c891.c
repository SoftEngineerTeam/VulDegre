void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    badStatic = 1; /* true */
    data = badSource(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printStructLine(data);
    free(data);
}