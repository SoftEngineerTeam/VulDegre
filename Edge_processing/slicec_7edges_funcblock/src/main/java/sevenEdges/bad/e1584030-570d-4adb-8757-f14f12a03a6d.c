void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_64_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_64b_badSink(&data);
}