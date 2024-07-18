wchar_t * CWE126_Buffer_Overread__malloc_wchar_t_memmove_22_badSource(wchar_t * data)
{
    if(CWE126_Buffer_Overread__malloc_wchar_t_memmove_22_badGlobal)
    {
        /* FLAW: Use a small buffer */
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 50-1); /* fill with 'A's */
        data[50-1] = L'\0'; /* null terminate */
    }
    return data;
}