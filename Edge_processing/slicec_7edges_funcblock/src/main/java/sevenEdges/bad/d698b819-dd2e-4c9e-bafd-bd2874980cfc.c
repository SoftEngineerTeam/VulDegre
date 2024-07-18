void CWE401_Memory_Leak__int_realloc_03_bad()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}