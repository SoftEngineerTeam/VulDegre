void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_34_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_34_unionType myUnion;
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
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
            wcscat(dest, data);
            printWLine(data);
        }
    }
}