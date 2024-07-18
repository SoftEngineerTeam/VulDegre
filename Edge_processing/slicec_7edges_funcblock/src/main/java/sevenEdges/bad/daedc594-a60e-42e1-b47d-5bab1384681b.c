void CWE401_Memory_Leak__twoIntsStruct_malloc_16_bad()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
        break;
    }
}