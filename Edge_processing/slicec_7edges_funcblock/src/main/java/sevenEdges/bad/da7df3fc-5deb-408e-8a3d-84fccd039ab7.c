void CWE127_Buffer_Underread__malloc_wchar_t_ncpy_63_bad()
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
    CWE127_Buffer_Underread__malloc_wchar_t_ncpy_63b_badSink(&data);
}