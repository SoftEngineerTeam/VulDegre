void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_bad()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_structType myStruct;
    int dataBadBuffer[50];
    int dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67b_badSink(myStruct);
}