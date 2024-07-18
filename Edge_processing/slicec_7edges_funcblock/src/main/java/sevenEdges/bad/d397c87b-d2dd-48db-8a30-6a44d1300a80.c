void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_63_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_63b_badSink(&data);
}