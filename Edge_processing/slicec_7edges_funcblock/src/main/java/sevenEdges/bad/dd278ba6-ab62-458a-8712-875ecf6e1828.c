void CWE126_Buffer_Overread__wchar_t_alloca_memmove_67_bad()
{
    wchar_t * data;
    CWE126_Buffer_Overread__wchar_t_alloca_memmove_67_structType myStruct;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBadBuffer, L'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = L'\0'; /* null terminate */
    wmemset(dataGoodBuffer, L'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = L'\0'; /* null terminate */
    /* FLAW: Set data pointer to a small buffer */
    data = dataBadBuffer;
    myStruct.structFirst = data;
    CWE126_Buffer_Overread__wchar_t_alloca_memmove_67b_badSink(myStruct);
}