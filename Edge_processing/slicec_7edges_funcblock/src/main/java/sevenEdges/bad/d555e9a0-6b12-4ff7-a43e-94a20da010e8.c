void CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_15_bad()
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
        size_t i;
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}