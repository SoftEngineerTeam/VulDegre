void CWE401_Memory_Leak__twoIntsStruct_realloc_32_bad()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}