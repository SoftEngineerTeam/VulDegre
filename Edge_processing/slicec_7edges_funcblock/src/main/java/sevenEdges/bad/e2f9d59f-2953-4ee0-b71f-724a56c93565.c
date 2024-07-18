void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_54_bad()
{
    int * data;
    int dataBadBuffer[50];
    int dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_54b_badSink(data);
}