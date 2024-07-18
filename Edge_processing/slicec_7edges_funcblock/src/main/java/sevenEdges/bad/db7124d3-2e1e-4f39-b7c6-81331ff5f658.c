void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_05_bad()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)ALLOCA(10);
    }
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}