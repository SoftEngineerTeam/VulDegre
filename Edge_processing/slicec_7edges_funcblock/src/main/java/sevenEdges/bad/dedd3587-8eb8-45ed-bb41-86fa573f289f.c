void CWE126_Buffer_Overread__malloc_wchar_t_memmove_61_bad()
{
    wchar_t * data;
    data = NULL;
    data = CWE126_Buffer_Overread__malloc_wchar_t_memmove_61b_badSource(data);
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