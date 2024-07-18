void CWE401_Memory_Leak__twoIntsStruct_calloc_52_bad()
{
    twoIntsStruct * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    /* Initialize and make use of data */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    CWE401_Memory_Leak__twoIntsStruct_calloc_52b_badSink(data);
}