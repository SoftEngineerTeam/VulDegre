void CWE122_Heap_Based_Buffer_Overflow__CWE135_03_bad()
{
    void * data;
    data = NULL;
    if(5==5)
    {
        {
            wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (dataBadBuffer == NULL) {exit(-1);}
            wmemset(dataBadBuffer, L'A', 50-1);
            dataBadBuffer[50-1] = L'\0';
            /* POTENTIAL FLAW: Set data to point to a wide string */
            data = (void *)dataBadBuffer;
        }
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
            (void)wcscpy(dest, data);
            printLine((char *)dest);
            free(dest);
        }
    }
}