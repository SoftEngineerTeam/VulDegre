void CWE401_Memory_Leak__int_malloc_21_bad()
{
    int * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    badStatic = 1; /* true */
    badSink(data);
}