void CWE401_Memory_Leak__int_malloc_05_bad()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}