void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_34_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_34_unionType myUnion;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
            size_t i, dataLen;
            dataLen = wcslen(data);
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            for (i = 0; i < dataLen; i++)
            {
                dest[i] = data[i];
            }
            dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
            printWLine(data);
        }
    }
}