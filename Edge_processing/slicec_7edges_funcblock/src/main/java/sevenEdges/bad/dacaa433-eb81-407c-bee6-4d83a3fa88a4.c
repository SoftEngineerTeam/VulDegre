void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_bad()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_unionType myUnion;
    char * dataBadBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA(100*sizeof(char));
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* fill with 'C's */
            source[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
            strcpy(data, source);
            printLine(data);
        }
    }
}