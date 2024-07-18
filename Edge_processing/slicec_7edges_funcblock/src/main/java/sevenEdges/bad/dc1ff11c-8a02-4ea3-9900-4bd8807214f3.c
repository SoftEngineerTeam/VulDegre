void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_34_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_34_unionType myUnion;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            wcscpy(data, source);
            printWLine(data);
        }
    }
}