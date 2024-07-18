void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad()
{
    double * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (double *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printDoubleLine(*data);
    free(data);
}