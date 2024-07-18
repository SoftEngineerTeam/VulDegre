void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_66_bad()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)ALLOCA(10);
    /* put data in array */
    dataArray[2] = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_66b_badSink(dataArray);
}