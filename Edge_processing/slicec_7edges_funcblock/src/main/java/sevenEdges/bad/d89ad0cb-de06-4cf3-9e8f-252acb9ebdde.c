void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_bad()
{
    twoIntsStruct * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType myStruct;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67b_badSink(myStruct);
}