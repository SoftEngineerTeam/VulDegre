void CWE124_Buffer_Underwrite__char_alloca_memmove_67_bad()
{
    char * data;
    CWE124_Buffer_Underwrite__char_alloca_memmove_67_structType myStruct;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    CWE124_Buffer_Underwrite__char_alloca_memmove_67b_badSink(myStruct);
}