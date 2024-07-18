void CWE127_Buffer_Underread__wchar_t_alloca_cpy_66_bad()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    /* put data in array */
    dataArray[2] = data;
    CWE127_Buffer_Underread__wchar_t_alloca_cpy_66b_badSink(dataArray);
}