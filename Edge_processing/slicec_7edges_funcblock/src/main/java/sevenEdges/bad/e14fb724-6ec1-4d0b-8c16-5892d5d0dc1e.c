void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_68_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_68_badData = data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_68b_badSink();
}