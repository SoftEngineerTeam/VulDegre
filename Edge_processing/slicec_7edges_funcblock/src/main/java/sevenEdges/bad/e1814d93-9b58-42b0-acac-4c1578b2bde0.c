void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_64_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_64b_badSink(&data);
}