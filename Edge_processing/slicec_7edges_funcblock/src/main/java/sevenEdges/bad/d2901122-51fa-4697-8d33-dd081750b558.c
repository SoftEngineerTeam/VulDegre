wchar_t * CWE127_Buffer_Underread__malloc_wchar_t_loop_22_badSource(wchar_t * data)
{
    if(CWE127_Buffer_Underread__malloc_wchar_t_loop_22_badGlobal)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (dataBuffer == NULL) {exit(-1);}
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            /* FLAW: Set data pointer to before the allocated memory buffer */
            data = dataBuffer - 8;
        }
    }
    return data;
}