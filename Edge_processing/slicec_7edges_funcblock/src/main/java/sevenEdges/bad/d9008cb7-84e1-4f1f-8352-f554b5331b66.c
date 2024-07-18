void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64b_badSink(&data);
}