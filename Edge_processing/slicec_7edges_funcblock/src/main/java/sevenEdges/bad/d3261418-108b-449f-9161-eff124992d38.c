int * CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_61b_badSource(int * data)
{
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    return data;
}