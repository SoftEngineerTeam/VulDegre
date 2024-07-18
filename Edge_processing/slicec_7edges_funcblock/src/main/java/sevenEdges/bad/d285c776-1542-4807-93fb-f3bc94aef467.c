void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_53_bad()
{
    int64_t * data;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_53b_badSink(data);
}