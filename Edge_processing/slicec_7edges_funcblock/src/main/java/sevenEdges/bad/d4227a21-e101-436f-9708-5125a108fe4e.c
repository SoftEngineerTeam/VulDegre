void CWE401_Memory_Leak__int_malloc_65_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = CWE401_Memory_Leak__int_malloc_65b_badSink;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)malloc(100*sizeof(int));
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    /* use the function pointer */
    funcPtr(data);
}