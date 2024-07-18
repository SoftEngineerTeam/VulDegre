void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType myStruct;
    char * dataBadBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA(100*sizeof(char));
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67b_badSink(myStruct);
}