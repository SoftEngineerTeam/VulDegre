void CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_41_bad()
{
    int * data;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)ALLOCA(10);
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_41_badSink(data);
}