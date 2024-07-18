void CWE401_Memory_Leak__int_calloc_12_bad()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5;
        printIntLine(data[0]);
    }
    else
    {
        /* FIX: Use memory allocated on the stack with ALLOCA */
        data = (int *)ALLOCA(100*sizeof(int));
        /* Initialize and make use of data */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
    else
    {
        /* FIX: Deallocate memory */
        free(data);
    }
}