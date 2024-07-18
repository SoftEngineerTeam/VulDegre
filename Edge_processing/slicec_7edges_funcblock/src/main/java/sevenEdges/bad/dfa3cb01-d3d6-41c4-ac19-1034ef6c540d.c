void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_16_bad()
{
    int * data;
    data = NULL;
    while(1)
    {
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        int source[10] = {0};
        size_t i;
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}