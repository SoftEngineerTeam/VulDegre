void CWE124_Buffer_Underwrite__malloc_wchar_t_memcpy_64_bad()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
    }
    CWE124_Buffer_Underwrite__malloc_wchar_t_memcpy_64b_badSink(&data);
}