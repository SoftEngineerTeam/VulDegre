void CWE401_Memory_Leak__twoIntsStruct_calloc_04_bad()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}