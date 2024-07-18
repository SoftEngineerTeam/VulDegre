void CWE401_Memory_Leak__int_malloc_34_bad()
{
    int * data;
    CWE401_Memory_Leak__int_malloc_34_unionType myUnion;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}