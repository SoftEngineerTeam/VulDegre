void CWE401_Memory_Leak__int_realloc_64_bad()
{
    int * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)realloc(data, 100*sizeof(int));
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    CWE401_Memory_Leak__int_realloc_64b_badSink(&data);
}