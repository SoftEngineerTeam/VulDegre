void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType myStruct;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67b_badSink(myStruct);
}