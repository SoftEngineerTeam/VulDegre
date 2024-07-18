void CWE122_Heap_Based_Buffer_Overflow__CWE135_22_bad()
{
    void * data;
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        /* POTENTIAL FLAW: Set data to point to a wide string */
        data = (void *)dataBadBuffer;
    }
    CWE122_Heap_Based_Buffer_Overflow__CWE135_22_badGlobal = 1; /* true */
    CWE122_Heap_Based_Buffer_Overflow__CWE135_22_badSink(data);
}