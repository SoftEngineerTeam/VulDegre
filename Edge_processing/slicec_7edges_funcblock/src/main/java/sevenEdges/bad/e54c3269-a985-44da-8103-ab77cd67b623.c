void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_bad()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * *dataPtr1 = &data;
    struct _twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        struct _twoIntsStruct * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        *dataPtr1 = data;
    }
    {
        struct _twoIntsStruct * data = *dataPtr2;
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}