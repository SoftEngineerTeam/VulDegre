void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}