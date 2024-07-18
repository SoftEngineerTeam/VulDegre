void CWE126_Buffer_Overread__malloc_wchar_t_memmove_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        /* FLAW: Use a small buffer */
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 50-1); /* fill with 'A's */
        data[50-1] = L'\0'; /* null terminate */
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: using memmove with the length of the dest where data
             * could be smaller than dest causing buffer overread */
            memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
            dest[100-1] = L'\0';
            printWLine(dest);
            free(data);
        }
    }
}