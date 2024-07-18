void CWE401_Memory_Leak__int_calloc_66_bad()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)calloc(100, sizeof(int));
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    /* put data in array */
    dataArray[2] = data;
    CWE401_Memory_Leak__int_calloc_66b_badSink(dataArray);
}