void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_08_bad()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}