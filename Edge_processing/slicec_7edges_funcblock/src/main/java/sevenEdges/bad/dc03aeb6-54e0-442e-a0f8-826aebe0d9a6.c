void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67_structType myStruct;
    char * dataBadBuffer = (char *)ALLOCA((10)*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA((10+1)*sizeof(char));
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_ncpy_67b_badSink(myStruct);
}