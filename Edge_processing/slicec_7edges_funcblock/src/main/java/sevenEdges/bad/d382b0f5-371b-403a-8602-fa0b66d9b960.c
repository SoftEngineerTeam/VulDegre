void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_41_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_41_badSink(data);
}