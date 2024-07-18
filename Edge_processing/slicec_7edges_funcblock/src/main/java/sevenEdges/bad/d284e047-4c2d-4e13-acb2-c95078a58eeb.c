void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_34_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncpy_34_unionType myUnion;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); /* fill with L'C's */
            source[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
            wcsncpy(data, source, 100-1);
            data[100-1] = L'\0'; /* Ensure the destination buffer is null terminated */
            printWLine(data);
        }
    }
}