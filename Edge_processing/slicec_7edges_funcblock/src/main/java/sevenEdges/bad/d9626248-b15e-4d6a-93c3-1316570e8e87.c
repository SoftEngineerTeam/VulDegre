void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_15_bad()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)ALLOCA(10);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}