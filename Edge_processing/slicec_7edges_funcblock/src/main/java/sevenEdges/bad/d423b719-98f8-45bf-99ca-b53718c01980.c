void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
        strcpy(data, source);
        printLine(data);
    }
}