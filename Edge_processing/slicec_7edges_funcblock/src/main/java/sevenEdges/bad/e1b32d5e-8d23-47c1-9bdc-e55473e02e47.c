void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
        strcat(data, source);
        printLine(data);
    }
}