void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_67_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_67_structType myStruct;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_67b_badSink(myStruct);
}