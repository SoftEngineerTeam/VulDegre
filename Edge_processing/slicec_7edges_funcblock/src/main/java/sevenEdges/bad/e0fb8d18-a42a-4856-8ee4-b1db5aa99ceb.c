void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_bad()
{
    char * data;
    char dataBadBuffer[50];
    char dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68_badData = data;
    CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_68b_badSink();
}