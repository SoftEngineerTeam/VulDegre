void CWE126_Buffer_Overread__malloc_wchar_t_loop_61_bad()
{
    wchar_t * data;
    data = NULL;
    data = CWE126_Buffer_Overread__malloc_wchar_t_loop_61b_badSource(data);
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* null terminate */
        destLen = wcslen(dest);
        /* POTENTIAL FLAW: using length of the dest where data
         * could be smaller than dest causing buffer overread */
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}