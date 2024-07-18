void CWE401_Memory_Leak__twoIntsStruct_realloc_66_bad()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    /* Initialize and make use of data */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    /* put data in array */
    dataArray[2] = data;
    CWE401_Memory_Leak__twoIntsStruct_realloc_66b_badSink(dataArray);
}