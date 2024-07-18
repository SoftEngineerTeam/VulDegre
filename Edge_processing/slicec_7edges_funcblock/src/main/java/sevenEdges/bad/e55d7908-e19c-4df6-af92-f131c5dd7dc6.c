void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_34_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_34_unionType myUnion;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            wcsncpy(dest, data, wcslen(data));
            dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
            printWLine(data);
        }
    }
}