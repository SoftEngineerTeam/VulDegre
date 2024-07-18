void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_loop_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; /* fill with 0's */
        {
            size_t i;
            /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}