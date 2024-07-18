void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_04_bad()
{
    int * data;
    int dataBadBuffer[50];
    int dataGoodBuffer[100];
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
         * buffer in various memory copying functions using a "large" source buffer. */
        data = dataBadBuffer;
    }
    {
        int source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}