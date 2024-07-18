void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67_structType myStruct;
    char dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67b_badSink(myStruct);
}