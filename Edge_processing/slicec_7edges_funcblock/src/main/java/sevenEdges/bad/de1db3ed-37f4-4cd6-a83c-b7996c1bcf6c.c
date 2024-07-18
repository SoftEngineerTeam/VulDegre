void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_bad()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)ALLOCA(10);
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67b_badSink(myStruct);
}