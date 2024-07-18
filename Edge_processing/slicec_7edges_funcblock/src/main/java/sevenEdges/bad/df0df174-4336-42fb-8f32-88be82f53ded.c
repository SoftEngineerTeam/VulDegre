void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67_structType myStruct;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_67b_badSink(myStruct);
}