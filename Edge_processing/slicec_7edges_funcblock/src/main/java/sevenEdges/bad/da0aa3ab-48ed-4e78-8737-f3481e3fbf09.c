void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}