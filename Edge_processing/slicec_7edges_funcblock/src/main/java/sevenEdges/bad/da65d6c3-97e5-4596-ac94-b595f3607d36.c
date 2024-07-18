void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    while(1)
    {
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (twoIntsStruct *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
        break;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printStructLine(data);
    free(data);
}