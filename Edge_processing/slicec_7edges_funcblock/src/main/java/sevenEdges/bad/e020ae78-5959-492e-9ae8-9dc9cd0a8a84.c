int * CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_badSource(int * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_badGlobal)
    {
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
    }
    return data;
}