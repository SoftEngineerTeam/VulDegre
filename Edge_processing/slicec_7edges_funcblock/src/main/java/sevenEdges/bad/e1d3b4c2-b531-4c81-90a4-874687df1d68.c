void CWE122_Heap_Based_Buffer_Overflow__CWE135_66b_badSink(void * dataArray[])
{
    /* copy data out of dataArray */
    void * data = dataArray[2];
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