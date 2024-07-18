void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_44_bad()
{
    int64_t * data;
    /* define a function pointer */
    void (*funcPtr) (int64_t *) = badSink;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    /* use the function pointer */
    funcPtr(data);
}