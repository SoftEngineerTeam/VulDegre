void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
    }
}