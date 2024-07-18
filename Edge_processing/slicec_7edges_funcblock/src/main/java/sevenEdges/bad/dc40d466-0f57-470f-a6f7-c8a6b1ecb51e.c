void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}