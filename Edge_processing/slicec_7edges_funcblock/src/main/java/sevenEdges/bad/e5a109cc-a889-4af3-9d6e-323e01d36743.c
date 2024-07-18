void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType myStruct;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_badSink(myStruct);
}